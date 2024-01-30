@class AMSURLAction, NSString;

@interface AMSOpenActionResult : NSObject

@property (retain, nonatomic) AMSURLAction *action;
@property (retain, nonatomic) NSString *buyParams;
@property (nonatomic) BOOL engagementPresented;
@property (nonatomic) BOOL interruptionResult;

- (void).cxx_destruct;

@end
