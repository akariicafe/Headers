@interface PTScanlineMask : NSObject

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } placement;

+ (id)scanlineMaskWithFocusBlurMap:(id)a0 region:(id)a1;

- (id)scanlineIter;

@end
