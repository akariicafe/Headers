@class PHAGraphServiceWorker, NSString;

@interface PHAPendingRequestReference : NSObject

@property (weak) PHAGraphServiceWorker *worker;
@property (retain) NSString *label;

- (void).cxx_destruct;
- (void)dealloc;

@end
