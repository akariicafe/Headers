@class NSString, BKSProcessAssertion;
@protocol VSBackgroundTaskDelegate;

@interface VSBackgroundTask : NSObject

@property (retain, nonatomic) BKSProcessAssertion *assertion;
@property (copy, nonatomic) NSString *name;
@property (weak, nonatomic) id<VSBackgroundTaskDelegate> delegate;

- (BOOL)begin;
- (void)end;
- (id)init;
- (void).cxx_destruct;

@end
