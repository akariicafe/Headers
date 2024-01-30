@class NSString, UIImageView, MTMaterialView;

@interface SBPlusSwitcherPageContentView : UIView <SBAppSwitcherPageContentView> {
    MTMaterialView *_materialView;
    UIImageView *_plusImageView;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) long long orientation;
@property (readonly, nonatomic) BOOL contentRequiresGroupOpacity;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
