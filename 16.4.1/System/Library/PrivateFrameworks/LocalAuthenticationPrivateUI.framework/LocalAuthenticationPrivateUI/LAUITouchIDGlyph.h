@class LAUIPKGlyphWrapper, UIImpactFeedbackGenerator, UIView;

@interface LAUITouchIDGlyph : NSObject {
    LAUIPKGlyphWrapper *_glyph;
    UIImpactFeedbackGenerator *_hapticGenerator;
}

@property (nonatomic) long long state;
@property (readonly, nonatomic) UIView *view;

- (id)initWithStyle:(long long)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)shake;

@end
