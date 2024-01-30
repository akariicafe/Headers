@class SBTransientOverlayViewController;

@interface SBTransientOverlayDismissalRequest : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) long long requestType;
@property (readonly, nonatomic) SBTransientOverlayViewController *viewController;

+ (id)dismissalRequestForAllViewControllers;
+ (id)dismissalRequestForViewController:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_init;
- (id)_copyWithClass:(Class)a0;

@end
