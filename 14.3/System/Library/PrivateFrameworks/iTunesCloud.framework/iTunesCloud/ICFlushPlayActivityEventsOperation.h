@class ICPlayActivityController, NSObject;
@protocol OS_dispatch_queue;

@interface ICFlushPlayActivityEventsOperation : ICAsyncOperation {
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (readonly, nonatomic) ICPlayActivityController *playActivityController;

- (id)init;
- (void).cxx_destruct;
- (void)execute;
- (id)initWithPlayActivityController:(id)a0;

@end
