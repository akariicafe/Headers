@class SBTransientOverlayViewController, SBWindowScene;

@interface SBTransientOverlayDismissalRequest : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) long long requestType;
@property (readonly, nonatomic) SBTransientOverlayViewController *viewController;
@property (readonly, weak, nonatomic) SBWindowScene *windowScene;

+ (id)dismissalRequestForAllViewControllers;
+ (id)dismissalRequestForAllViewControllersInWindowScene:(id)a0;
+ (id)dismissalRequestForViewController:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_copyWithClass:(Class)a0;

@end
