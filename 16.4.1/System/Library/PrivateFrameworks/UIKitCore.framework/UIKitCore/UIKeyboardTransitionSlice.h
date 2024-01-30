@class UIKBCacheToken;

@interface UIKeyboardTransitionSlice : NSObject {
    BOOL _shiftContents;
}

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startRect;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endRect;
@property (retain) UIKBCacheToken *startToken;
@property (retain) UIKBCacheToken *endToken;
@property int normalization;
@property BOOL delayCrossfade;
@property (readonly) BOOL hasGeometry;

+ (id)sliceWithStart:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 end:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)addStartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 end:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
