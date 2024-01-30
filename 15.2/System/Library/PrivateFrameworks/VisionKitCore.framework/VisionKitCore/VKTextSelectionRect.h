@class VKTextSelectionRectCustomHandleInfo, UIBezierPath, NSString, VKQuad;

@interface VKTextSelectionRect : VKBaseTextSelectionRect

@property (nonatomic) BOOL containsStart;
@property (nonatomic) BOOL containsEnd;
@property (nonatomic) long long writingDirection;
@property (copy, nonatomic) UIBezierPath *_path;
@property (retain, nonatomic) VKTextSelectionRectCustomHandleInfo *_customHandleInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (retain, nonatomic) NSString *_transcript;
@property (readonly, nonatomic) VKQuad *quad;

- (id)summaryDescription;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)description;
- (void).cxx_destruct;
- (id)handleInfoForQuad:(id)a0 origin:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 containsStart:(BOOL)a1 containsEnd:(BOOL)a2 writingDirection:(long long)a3 quad:(id)a4;

@end
