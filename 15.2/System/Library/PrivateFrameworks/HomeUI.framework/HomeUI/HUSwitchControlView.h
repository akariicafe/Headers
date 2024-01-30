@class NSString, UISwitch;
@protocol HUControlViewDelegate;

@interface HUSwitchControlView : UIView <HUControlView>

@property (readonly, nonatomic) UISwitch *switchView;
@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<HUControlViewDelegate> delegate;
@property (retain, nonatomic) id value;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic) BOOL canBeHighlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)valueClass;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_switchValueChanged:(id)a0;

@end
