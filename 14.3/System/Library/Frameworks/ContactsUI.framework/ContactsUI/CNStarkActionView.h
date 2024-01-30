@class UIColor, NSString, UIImage, UILabel, UIButton;
@protocol CNStarkActionViewDelegate;

@interface CNStarkActionView : UIView <CNContactQuickActionPresentation>

@property (nonatomic) double actionPlatterSize;
@property (nonatomic) double actionLabelOffset;
@property (nonatomic) double actionBorderWidth;
@property (retain, nonatomic) UIColor *disabledStrokeColor;
@property (retain, nonatomic) UIColor *disabledFillColor;
@property (retain, nonatomic) UIColor *disabledGlyphColor;
@property (retain, nonatomic) UIColor *enabledStrokeColor;
@property (retain, nonatomic) UIColor *enabledFillColor;
@property (retain, nonatomic) UIColor *enabledGlyphColor;
@property (retain, nonatomic) UIColor *selectedStrokeColor;
@property (retain, nonatomic) UIColor *selectedFillColor;
@property (retain, nonatomic) UIColor *selectedGlyphColor;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIButton *button;
@property (readonly, nonatomic) UILabel *label;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL disabledButtonFocused;
@property (retain, nonatomic) NSString *actionType;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL enabled;
@property (readonly, weak, nonatomic) id<CNStarkActionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)quickActionButtonWithDelegate:(id)a0;
+ (id)propertyTransportButtonWithDelegate:(id)a0;

- (BOOL)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)setupConstraints;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)choose;
- (void).cxx_destruct;
- (void)deselect;
- (void)select;
- (void)actionViewTapped:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)setupLabel;
- (void)traitCollectionDidChange:(id)a0;
- (void)setupClickGestureRecognizer;
- (void)actionViewTouchDown:(id)a0;
- (void)stateUpdated;
- (void)actionViewTouchUp:(id)a0;
- (void)clickGestureDidUpdate:(id)a0;
- (void)notifyDelegateAboutUserChoice;
- (void)updateForFocusedState:(BOOL)a0;
- (void)setupButton;

@end
