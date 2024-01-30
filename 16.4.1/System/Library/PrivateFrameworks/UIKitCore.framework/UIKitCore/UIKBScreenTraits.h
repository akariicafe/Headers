@class UIScreen;

@interface UIKBScreenTraits : NSObject {
    BOOL _isEmulatingIdiom;
    long long _idiomToEmulate;
}

@property (nonatomic) long long preferredEmojiScrollingDirection;
@property (readonly, nonatomic) UIScreen *screen;
@property (readonly, nonatomic) long long idiom;
@property (readonly, nonatomic) BOOL knobInput;
@property (readonly, nonatomic) BOOL touchInput;
@property (readonly, nonatomic) BOOL touchpadInput;
@property (nonatomic) long long orientation;
@property (nonatomic) double keyboardWidth;
@property (nonatomic) double assistantViewWidth;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } assistantViewWindowBounds;
@property (readonly, nonatomic) BOOL isKeyboardMinorEdgeWidth;
@property (nonatomic) double keyboardBarHeight;
@property (readonly, nonatomic) BOOL isInPopover;
@property (readonly, nonatomic) BOOL isFloating;
@property (nonatomic) BOOL isSplit;
@property (nonatomic) BOOL supportsSplit;
@property (nonatomic) BOOL centerFilled;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } keyboardScreenReferenceSize;
@property (nonatomic) struct CGSize { double width; double height; } stretchFactor;
@property (readonly, nonatomic) BOOL isLinear;
@property (readonly, nonatomic) BOOL isEmojiScrollingDirectionVertical;

+ (void)setMockIdiom:(long long)a0;
+ (id)traitsWithScreen:(id)a0 orientation:(long long)a1;
+ (id)traitsForInputModeWithScreen:(id)a0;
+ (id)fullScreenTraitsWithScreen:(id)a0 orientation:(long long)a1;
+ (id)traitsWithScreen:(id)a0 orientation:(long long)a1 ignoreRemoteKeyboard:(BOOL)a2;
+ (id)traitsForPopoverEmulatingWidth:(double)a0 minorEdge:(BOOL)a1 orientation:(long long)a2 idiom:(long long)a3;
+ (id)_activeUCBWindowForScreen:(id)a0;
+ (id)_activeKeyboardWindowForScreen:(id)a0;

- (id)initWithScreen:(id)a0 orientation:(long long)a1 allowFloating:(BOOL)a2 ignoreRemoteKeyboard:(BOOL)a3;
- (void)updateForTextInputTraits:(id)a0 supportedInteractionModel:(unsigned long long)a1;
- (void)updateForLinearLayout:(BOOL)a0;
- (id)initForInputModeWithScreen:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
