@class PKStrokeSelectionImage, PKSelectionController, PKImageView, PKStrokeSelection;
@protocol PKSelectionRendering;

@interface PKAdornmentView : UIView {
    PKImageView *_strokeSelectionImageView;
    BOOL _isInteracting;
}

@property (retain, nonatomic) PKStrokeSelection *strokeSelection;
@property (weak, nonatomic) PKSelectionController *selectionController;
@property (retain, nonatomic) id<PKSelectionRendering> selectionRenderer;
@property (retain, nonatomic) PKStrokeSelectionImage *strokeSelectionImage;

+ (Class)classForSelectionType:(long long)a0;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)_hideStrokeSelectionImageView:(BOOL)a0 animated:(BOOL)a1;
- (void)_liftStrokesOutOfTiledView;
- (void)_putStrokesBackIntoTiledViewAnimated:(BOOL)a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0 forInputType:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 strokeSelection:(id)a1 selectionController:(id)a2 selectionType:(long long)a3;

@end
