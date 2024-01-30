@class NSString;

@interface SBAppSwitcherServicePageContentView : UIView <SBAppSwitcherPageContentView>

@property (nonatomic) long long orientation;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long maskedCorners;
@property (readonly, nonatomic) BOOL contentRequiresGroupOpacity;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)invalidate;

@end
