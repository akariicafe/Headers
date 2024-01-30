@class NSString, NSDictionary;

@interface WBSTabDialogCancellationContext : NSObject

@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

+ (id)tabClosedContext;
+ (id)cancellationContextWithReason:(id)a0 userInfo:(id)a1;
+ (id)provisionalNavigationContext;
+ (id)committedNavigationContextWithURL:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithReason:(id)a0 userInfo:(id)a1;

@end
