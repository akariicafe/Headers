@class PETEventTracker2, NSObject;
@protocol OS_dispatch_queue;

@interface WFEventTracker : NSObject

@property (readonly, nonatomic) PETEventTracker2 *proactiveTracker;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *loggingQueue;

+ (id)sharedTracker;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTracker:(id)a0;
- (void)trackEvent:(id)a0;
- (void)trackEvent:(id)a0 count:(int)a1;

@end
