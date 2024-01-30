@class JFXTextEffectFrame, UIColor, NSDictionary, NSValue, PVMatrix44Double, NSAttributedString, NSNumber;

@interface JFXEffectTextEditingProperties : NSObject

@property (retain, nonatomic) JFXTextEffectFrame *effectFrame;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) NSDictionary *defaultTypingAttributes;
@property (nonatomic) BOOL useFullTransform;
@property (nonatomic) BOOL isAllCaps;
@property (nonatomic) BOOL isEmoji;
@property (nonatomic) BOOL isTextFlipped;
@property (nonatomic, getter=isOutlineDisabled) BOOL outlineDisabled;
@property (nonatomic) BOOL moveBeforeScalingToAvoidKeyboard;
@property (copy, nonatomic) UIColor *defaultTextColor;
@property (copy, nonatomic) UIColor *customTextColor;
@property (copy, nonatomic) UIColor *customTextEditTintColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedBounds;
@property (retain, nonatomic) NSValue *cachedScale;
@property (retain, nonatomic) NSNumber *cachedRotation;
@property (retain, nonatomic) PVMatrix44Double *cachedPartialTransformNoScaleNoTranslation;
@property (nonatomic) long long textAlignment;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) double baselineYOffset;
@property (nonatomic) BOOL isSpecialCaseForGameOverPoster;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } scale;
@property (readonly, nonatomic) double rotation;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } partialTransformNoScaleNoTranslation;

+ (id)textEditingPropertiesWithTextEffect:(id)a0 withText:(id)a1 relativeTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 index:(unsigned long long)a4 moveBeforeScalingToAvoidKeyboard:(BOOL)a5;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTextEffect:(id)a0 withText:(id)a1 relativeTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 index:(unsigned long long)a4 moveBeforeScalingToAvoidKeyboard:(BOOL)a5;
- (void)JFX_configureWithEffect:(id)a0;
- (void)JFX_configureWithAttributedString:(id)a0 text:(id)a1;
- (void)JFX_configureWithDefaultTypingAttributes:(id)a0;
- (void)JFX_modifyAttributedString:(id)a0;
- (void)JFX_modifyRangesOfAttributedString:(id)a0 isOutlineDisabled:(BOOL)a1;
- (void)JFX_modifyEntireAttributedString:(id)a0 forTargetSize:(struct CGSize { double x0; double x1; })a1 fontColor:(id)a2;

@end
