@class NSString;

@interface BNSceneSettings : UIApplicationSceneSettings

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } containerSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } presentationSize;
@property (readonly, nonatomic) int viewControllerAppearState;
@property (readonly, nonatomic) int bannerAppearState;
@property (readonly, copy, nonatomic) NSString *revocationReason;
@property (readonly, nonatomic, getter=isUserInteractionInProgress) BOOL userInteractionInProgress;
@property (readonly, copy, nonatomic) Class clientContainerViewControllerClass;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
