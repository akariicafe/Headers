@class NSString, UIVisualEffectView, UILabel, UIView;
@protocol HACCContentModuleDelegate;

@interface HUICCToggleButton : UIControl <HACCContentModule> {
    UIVisualEffectView *_titleContainer;
    UIView *_subtitleContainer;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (weak, nonatomic) id<HACCContentModuleDelegate> delegate;
@property (nonatomic) unsigned long long module;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enabled;
- (id)accessoryView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)accessibilityTraits;
- (void)setTitleText:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (void)setSubtitleText:(id)a0;
- (id)accessibilityLabel;
- (void)updateValue;
- (id)contentValue;

@end
