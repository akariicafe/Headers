@class NSMutableArray;
@protocol CACLabeledGridOverlayManagerDelegate;

@interface CACLabeledGridOverlayManager : CACSimpleContentViewManager {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _currentGridPortraitUpFrame;
}

@property long long currentLevel;
@property (retain) NSMutableArray *labeledElements;
@property (weak, nonatomic) id<CACLabeledGridOverlayManagerDelegate> delegate;
@property (nonatomic) BOOL needsToBeRedrawn;
@property long long currentNumberOfColumns;
@property long long currentNumberOfRows;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } portraitUpCenterPoint;

+ (unsigned long long)maxNumberOfRowsForDevice;
+ (unsigned long long)maxNumberOfColumnsForDevice;

- (void).cxx_destruct;
- (BOOL)isOverlay;
- (void)resetIdleTimer;
- (void)hideAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)showOverlay;
- (void)resetAndDrawAtTopLevel;
- (BOOL)updateOverlayWithPortraitUpRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startDelayedDimmingOfNumbers;
- (BOOL)_isNextLevelAvailable;
- (void)stopDelayedDimmingOfNumbers;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bestDrilledGridRectForPortraitUpRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_generateLabeledElementsForPortraitUpRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })bestGridResolutionForPortraitUpRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldZoom;

@end
