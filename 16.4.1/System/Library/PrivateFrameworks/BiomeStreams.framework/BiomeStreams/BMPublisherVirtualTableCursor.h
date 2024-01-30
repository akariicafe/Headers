@class BPSPublisher, BPSSubscription, NSString;

@interface BMPublisherVirtualTableCursor : NSObject <BPSSubscriber> {
    id /* block */ _publisherBlock;
    BOOL _complete;
    BOOL _pendingRowObject;
    id _rowObject;
}

@property (readonly, nonatomic) BPSPublisher *publisher;
@property (readonly, nonatomic) BPSSubscription *subscription;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic) id rowObject;
@property (readonly, nonatomic) long long rowID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (long long)receiveInput:(id)a0;
- (void)receiveCompletion:(id)a0;
- (void)receiveSubscription:(id)a0;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)advance;
- (id)initWithPublisherBlock:(id /* block */)a0;

@end
