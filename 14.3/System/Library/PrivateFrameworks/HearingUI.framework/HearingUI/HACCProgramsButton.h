@class NSString, UIVisualEffectView, UILabel, UIView;
@protocol HACCContentModuleDelegate;

@interface HACCProgramsButton : UIControl <HACCContentModule> {
    UIVisualEffectView *_titleContainer;
    UIView *_subtitleContainer;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (weak, nonatomic) id<HACCContentModuleDelegate> delegate;
@property (nonatomic) unsigned long long module;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enabled;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)updateValue;
- (void)buttonTapped:(id)a0;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)contentValue;

@end
