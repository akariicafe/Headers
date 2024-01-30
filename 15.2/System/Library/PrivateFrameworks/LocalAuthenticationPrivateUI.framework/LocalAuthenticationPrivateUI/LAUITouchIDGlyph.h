@class UIImpactFeedbackGenerator, LAPKGlyphWrapper, UIView;

@interface LAUITouchIDGlyph : NSObject {
    LAPKGlyphWrapper *_glyph;
    UIImpactFeedbackGenerator *_hapticGenerator;
}

@property (nonatomic) long long state;
@property (readonly, nonatomic) UIView *view;

- (void)shake;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
