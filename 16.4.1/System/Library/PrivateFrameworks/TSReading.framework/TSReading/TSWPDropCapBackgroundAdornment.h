@class NSString, TSUColor;

@interface TSWPDropCapBackgroundAdornment : NSObject <TSWPLineFragmentAdornment> {
    TSUColor *_color;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
}

@property (readonly, nonatomic) BOOL isBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)drawAdornmentForFragment:(const void *)a0 inContext:(struct CGContext { } *)a1 withFlags:(unsigned int)a2 state:(const void *)a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (id)initWithColor:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
