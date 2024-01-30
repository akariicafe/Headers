@class AMSURLAction;

@interface AMSOpenActionResult : NSObject

@property (retain, nonatomic) AMSURLAction *action;
@property (nonatomic) BOOL engagementPresented;
@property (nonatomic) BOOL interruptionResult;

- (void).cxx_destruct;

@end
