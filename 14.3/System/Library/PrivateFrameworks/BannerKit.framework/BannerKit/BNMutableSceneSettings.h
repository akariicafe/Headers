@class NSString;

@interface BNMutableSceneSettings : UIMutableApplicationSceneSettings

@property (nonatomic) struct CGSize { double x0; double x1; } containerSize;
@property (nonatomic) struct CGSize { double x0; double x1; } presentationSize;
@property (nonatomic) int viewControllerAppearState;
@property (nonatomic) int bannerAppearState;
@property (copy, nonatomic) NSString *revocationReason;
@property (nonatomic, getter=isUserInteractionInProgress) BOOL userInteractionInProgress;
@property (copy, nonatomic) Class clientContainerViewControllerClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
