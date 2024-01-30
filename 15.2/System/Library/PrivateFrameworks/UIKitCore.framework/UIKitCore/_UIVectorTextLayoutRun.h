@class NSString, NSAttributedString, _UIVectorTextLayoutInfo;

@interface _UIVectorTextLayoutRun : NSObject <_UIVectorTextLayoutRun> {
    unsigned long long _glyphCount;
    NSAttributedString *_sourceString;
    _UIVectorTextLayoutInfo *_layoutInfo;
}

@property (readonly, nonatomic) struct __CTRun { } *_CTRun;
@property (nonatomic) double baseline;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lineRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } usedLineRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } usedRunRect;
@property (readonly, nonatomic) unsigned long long lineIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)string;
- (void)renderInContext:(struct CGContext { } *)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })stringRange;
- (void).cxx_destruct;
- (void)enumerateGlyphsUsingBlock:(id /* block */)a0;
- (void)_enumerateGlyphsUsingBlock:(id /* block */)a0;
- (id)initWithCTRun:(struct __CTRun { } *)a0 lineIndex:(unsigned long long)a1 layoutInfo:(id)a2;
- (long long)glyphCount;
- (id)font;
- (void)dealloc;
- (BOOL)shouldRender;

@end
