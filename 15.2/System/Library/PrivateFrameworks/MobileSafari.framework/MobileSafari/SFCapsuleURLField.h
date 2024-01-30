@class NSString, UITextField, _SFDimmingButton, NSLayoutConstraint, _SFBarTheme, NSArray;
@protocol SFCapsuleContentViewSizeUpdating;

@interface SFCapsuleURLField : UIView <SFCapsuleContentView> {
    NSLayoutConstraint *_textFieldTrailingConstraint;
    double _lastPlaceholderWidth;
    _SFDimmingButton *_clearTextButton;
    NSLayoutConstraint *_voiceSearchToClearButtonConstraint;
    NSLayoutConstraint *_voiceSearchToCapsuleConstraint;
    _SFDimmingButton *_voiceSearchButton;
    NSArray *_voiceSearchButtonConstraints;
}

@property (readonly, nonatomic) UITextField *textField;
@property (nonatomic) BOOL showsVoiceSearchButton;
@property (copy, nonatomic) id /* block */ voiceSearchTappedAction;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rangeOfKeyText;
@property (weak, nonatomic) id<SFCapsuleContentViewSizeUpdating> sizeUpdater;
@property (nonatomic, setter=setSelected:) BOOL isSelected;
@property (nonatomic, setter=setMinimized:) BOOL isMinimized;
@property (nonatomic, setter=setHighlighted:) BOOL isHighlighted;
@property (copy, nonatomic) id /* block */ highlightObserver;
@property (retain, nonatomic) _SFBarTheme *theme;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) double minimizedContentHorizontalInset;
@property (nonatomic) double minimizationPercent;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } keyContentRect;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } keyContentTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_tap:(id)a0;
- (id)initWithTextField:(id)a0;
- (void)layoutSubviews;
- (void)textFieldDidChange:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)_updatePlaceholderText;
- (void)_clearTextButtonTapped:(id)a0;
- (id)_newDimmingButtonWithSystemImageNamed:(id)a0 action:(SEL)a1 accessibilityIdentifier:(id)a2;
- (void)_voiceSearchButtonTapped:(id)a0;
- (void)_updateClearButtonVisibility;

@end
