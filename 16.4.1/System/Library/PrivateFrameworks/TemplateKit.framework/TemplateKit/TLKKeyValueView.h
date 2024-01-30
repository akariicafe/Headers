@class TLKKeyValueGridView, TLKStackView, TLKImageView, NSArray, TLKImage, NSString;

@interface TLKKeyValueView : TLKView <NUIContainerViewDelegate>

@property (retain, nonatomic) TLKKeyValueGridView *leadingGrid;
@property (retain, nonatomic) TLKKeyValueGridView *trailingGrid;
@property (retain, nonatomic) TLKImageView *imageView;
@property (retain, nonatomic) TLKStackView *contentView;
@property (nonatomic) double lastMeasuredWidth;
@property (retain, nonatomic) NSArray *leadingTuples;
@property (retain, nonatomic) NSArray *trailingTuples;
@property (retain, nonatomic) TLKImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)visibleRowsInGrid:(id)a0;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerView:(id)a0 layoutFrameForArrangedSubview:(id)a1 withProposedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void).cxx_destruct;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (BOOL)containerView:(id)a0 shouldRestartMeasurementDueToCompressionInAxis:(long long)a1 forReason:(long long)a2;
- (void)_reconfigureForCompressedState;
- (long long)currentStackViewDistribution;
- (BOOL)leadingGridIsHidden;
- (id)leadingTextKeyLabels;
- (unsigned long long)numberOfVisibleRowsForLeadingGrid;
- (unsigned long long)numberOfVisibleRowsForTrailingGrid;
- (void)observedPropertiesChanged;
- (id)setupContentView;
- (BOOL)trailingGridIsHidden;

@end
