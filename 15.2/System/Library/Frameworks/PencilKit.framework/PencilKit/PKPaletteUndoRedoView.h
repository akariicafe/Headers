@class UIStackView, NSString, PKPaletteButton, UIView, NSLayoutConstraint;
@protocol PKPaletteUndoRedoViewDelegate;

@interface PKPaletteUndoRedoView : UIView <PKPaletteEdgeLocating, PKPaletteViewSizeScaling>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) PKPaletteButton *undoButton;
@property (retain, nonatomic) PKPaletteButton *redoButton;
@property (retain, nonatomic) NSLayoutConstraint *undoButtonWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *undoButtonHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *redoButtonWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *redoButtonHeightConstraint;
@property (weak, nonatomic) id<PKPaletteUndoRedoViewDelegate> delegate;
@property (nonatomic, getter=isUndoEnabled) BOOL undoEnabled;
@property (nonatomic, getter=isRedoEnabled) BOOL redoEnabled;
@property (nonatomic) double interItemSpacing;
@property (nonatomic) unsigned long long edgeLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double scalingFactor;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)_updateUI;
- (void)updateUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (struct CGSize { double x0; double x1; })_buttonSize;
- (void)installStackView;
- (void)installUndoButton;
- (void)installRedoButton;
- (void)handleUndo:(id)a0;
- (void)handleRedo:(id)a0;

@end
