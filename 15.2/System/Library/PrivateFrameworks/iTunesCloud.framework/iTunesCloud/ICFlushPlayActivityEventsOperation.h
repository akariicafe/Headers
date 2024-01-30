@class ICPlayActivityController, NSObject;
@protocol OS_dispatch_queue;

@interface ICFlushPlayActivityEventsOperation : ICAsyncOperation {
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (readonly, nonatomic) ICPlayActivityController *playActivityController;

- (void)execute;
- (void).cxx_destruct;
- (id)init;
- (id)initWithPlayActivityController:(id)a0;

@end
