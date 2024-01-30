@class NSMutableOrderedSet, NSNumber, NSObject;
@protocol OS_dispatch_queue, HAPFragmentationStreamDelegate;

@interface HAPFragmentationStream : HMFObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) NSMutableOrderedSet *pendingPackets;
@property (retain, nonatomic) NSNumber *currentPacketTransactionIdentifier;
@property (weak) id<HAPFragmentationStreamDelegate> delegate;

+ (id)fragmentationPacketsForData:(id)a0 maxLength:(unsigned long long)a1 transactionIdentifier:(unsigned short)a2;

- (void)close;
- (void)open;
- (void).cxx_destruct;
- (id)init;
- (void)receivedFragmentedPacket:(id)a0;
- (id)__transactionDataWithTransactionIdentifier:(unsigned short)a0;
- (BOOL)__isTransactionCompleteWithTransactionIdentifier:(unsigned short)a0;
- (id)__filteredPacketsWithTransactionIdentifier:(unsigned short)a0;
- (void)__addFragmentationPacket:(id)a0;
- (void)__removeAllPendingPacketsWithTransactionIdentifier:(unsigned short)a0;

@end
