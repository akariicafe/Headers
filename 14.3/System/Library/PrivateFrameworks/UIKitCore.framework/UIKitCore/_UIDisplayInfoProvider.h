@class FBSDisplayConfiguration, NSString;

@interface _UIDisplayInfoProvider : NSObject <_UIDisplayInfoProviding>

@property (readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly, nonatomic) unsigned long long artworkSubtype;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } peripheryInsets;
@property (readonly, nonatomic) double systemMinimumMargin;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsetsPortrait;
@property (readonly, nonatomic) double homeAffordanceOverlayAllowance;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsetsLandscapeLeft;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsetsPortraitUpsideDown;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsetsLandscapeRight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
