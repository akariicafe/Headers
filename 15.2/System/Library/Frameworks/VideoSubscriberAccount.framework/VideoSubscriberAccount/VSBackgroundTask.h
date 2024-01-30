@class NSString, RBSAssertion;
@protocol VSBackgroundTaskDelegate;

@interface VSBackgroundTask : NSObject

@property (retain, nonatomic) RBSAssertion *assertion;
@property (copy, nonatomic) NSString *name;
@property (weak, nonatomic) id<VSBackgroundTaskDelegate> delegate;

- (void)end;
- (BOOL)begin;
- (void).cxx_destruct;
- (id)init;

@end
