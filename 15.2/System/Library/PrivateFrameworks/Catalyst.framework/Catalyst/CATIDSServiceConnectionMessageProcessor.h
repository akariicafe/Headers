@class NSUUID, NSObject;
@protocol CATIDSServiceConnectionMessageProcessorDelegate, OS_dispatch_queue;

@interface CATIDSServiceConnectionMessageProcessor : NSObject {
    NSObject<OS_dispatch_queue> *mWorkQueue;
    NSUUID *mConnectionIdentifier;
}

@property (weak, nonatomic) id<CATIDSServiceConnectionMessageProcessorDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithWorkQueue:(id)a0 connectionIdentifier:(id)a1;
- (void)receiveMessage:(id)a0;

@end
