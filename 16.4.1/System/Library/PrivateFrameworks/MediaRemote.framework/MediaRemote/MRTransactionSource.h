@class MRPlayerPath, MRTransactionPacketizer, NSMutableArray;
@protocol MRTransactionSourceDelegate;

@interface MRTransactionSource : NSObject {
    MRTransactionPacketizer *_packetizer;
    NSMutableArray *_packets;
    id<MRTransactionSourceDelegate> _delegate;
}

@property (readonly, nonatomic) unsigned long long name;
@property (readonly, nonatomic) MRPlayerPath *playerPath;

- (void)_begin;
- (void).cxx_destruct;
- (void)_processMessage:(id)a0;
- (id)initWithName:(unsigned long long)a0 playerPath:(id)a1 packets:(id)a2 delegate:(id)a3;

@end
