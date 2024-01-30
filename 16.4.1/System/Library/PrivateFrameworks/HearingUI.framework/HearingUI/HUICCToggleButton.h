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

- (id)accessibilityLabel;
- (BOOL)enabled;
- (id)accessoryView;
- (void)setSubtitleText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitleText:(id)a0;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (void)updateValue;
- (id)contentValue;

@end
