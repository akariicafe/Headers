@interface _MFAtomTextSelectionRect : UITextSelectionRect

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (nonatomic) BOOL containsStart;
@property (nonatomic) BOOL containsEnd;

@end
