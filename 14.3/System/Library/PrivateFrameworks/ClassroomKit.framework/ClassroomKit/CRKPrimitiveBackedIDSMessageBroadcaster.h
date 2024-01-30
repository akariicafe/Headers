@class NSHashTable;
@protocol CRKIDSPrimitives, CRKIDSListener;

@interface CRKPrimitiveBackedIDSMessageBroadcaster : NSObject <CRKIDSMessageBroadcasting>

@property (readonly, nonatomic) id<CRKIDSPrimitives> IDSPrimitives;
@property (readonly, nonatomic) NSHashTable *broadcastHandlers;
@property (retain, nonatomic) id<CRKIDSListener> messageListener;

+ (id)broadcasterWithIDSPrimitives:(id)a0;

- (void).cxx_destruct;
- (id)initWithIDSPrimitives:(id)a0;
- (void)beginListeningForMessagesWithCompletion:(id /* block */)a0;
- (void)broadcastMessage:(id)a0 senderAppleID:(id)a1 senderAddress:(id)a2;
- (void)addBroadcastHandler:(id)a0;

@end
