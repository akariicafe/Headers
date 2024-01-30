@class _UIFocusMapSnapshot, _UIFocusMapSearchInfo, UIImage;

@interface _UIFocusMapSnapshotDebugInfo : NSObject

@property (readonly, nonatomic) _UIFocusMapSnapshot *snapshot;
@property (readonly, weak, nonatomic) _UIFocusMapSearchInfo *focusMapSearchInfo;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } imageAnchorPoint;

+ (id)_summaryImageForDebugInfoArray:(id)a0 forFocusMovementWithInfo:(id)a1 scaleFactor:(double)a2;

- (void).cxx_destruct;
- (id)_drawImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectContainingAllFocusRegions;
- (id)initWithSnapshot:(id)a0 focusMapSearchInfo:(id)a1;

@end
