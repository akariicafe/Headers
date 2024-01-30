@class NSArray, UIKBBackdropView, UIKBTree, TUIKey, UIKBRenderFactory, TUILiveKeyView;

@interface TUIKBKeyView : UIKBContainerKeyView

@property (retain, nonatomic) TUIKey *backingKey;
@property (retain, nonatomic) UIKBTree *representedKey;
@property (retain, nonatomic) UIKBBackdropView *backdropView;
@property (retain, nonatomic) NSArray *contentViewConstraints;
@property (retain, nonatomic) UIKBRenderFactory *splitFactory;
@property (retain, nonatomic) UIKBRenderFactory *unsplitFactory;
@property (retain, nonatomic) TUILiveKeyView *liveContentView;
@property (nonatomic) long long rowNumber;
@property (readonly, nonatomic) long long layoutType;
@property (nonatomic) long long layoutShape;
@property (nonatomic) long long keyStyle;
@property (nonatomic) double fontSize;
@property (nonatomic) double multiplier;

- (id)initWithKey:(id)a0;
- (id)key;
- (void)prepareForTransition;
- (long long)contentMode;
- (BOOL)requiresConstraintBasedLayout;
- (void)updateStyle:(long long)a0;
- (void)updateState:(int)a0;
- (void)updateConstraints;
- (void)addContentView;
- (id)description;
- (void).cxx_destruct;
- (void)clearTouches;
- (void)finishTransition;
- (BOOL)isDynamicKey;
- (BOOL)translatesAutoresizingMaskIntoConstraints;
- (void)dimKeyUsingOpacities:(id)a0;
- (double)multiplierForDisplayType:(int)a0;
- (id)splitFactoryForKeyStyle:(long long)a0;
- (void)updateLabelWeight:(long long)a0;

@end
