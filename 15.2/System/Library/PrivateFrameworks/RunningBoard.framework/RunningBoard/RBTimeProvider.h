@class NSString;

@interface RBTimeProvider : NSObject <RBTimeProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (double)currentTime;
- (double)startTimeForProcess:(id)a0;
- (void)executeAfter:(double)a0 onQueue:(id)a1 block:(id /* block */)a2;

@end
