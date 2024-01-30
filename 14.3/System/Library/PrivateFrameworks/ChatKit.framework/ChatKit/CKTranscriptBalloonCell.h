@class CKBalloonView, NSArray, CKLineView, CKTranscriptCollectionViewLayoutAttributes;

@interface CKTranscriptBalloonCell : CKTranscriptMessageContentCell

@property (copy, nonatomic) CKTranscriptCollectionViewLayoutAttributes *layoutAttributes;
@property (copy, nonatomic) NSArray *threadGroupLayoutAttributes;
@property (copy, nonatomic) NSArray *threadLineDescription;
@property (nonatomic) unsigned long long lineType;
@property (retain, nonatomic) CKLineView *lineView;
@property (nonatomic) double lineHorizontalOffset;
@property (nonatomic) double lineViewReferenceY;
@property (nonatomic) double lineViewExpansionFactor;
@property (retain, nonatomic) CKBalloonView *balloonView;
@property (nonatomic) BOOL mayReparentPluginViews;
@property (nonatomic, getter=isInsertingReply) BOOL insertingReply;
@property (readonly, nonatomic) BOOL lineIsExtended;

- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)clearFilters;
- (id)init;
- (void).cxx_destruct;
- (void)addFilter:(id)a0;
- (void)dealloc;
- (BOOL)hidesCheckmark;
- (void)_ck_setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateLineForThreadGroupLayoutAttributes:(id)a0;
- (void)layoutSubviewsForContents;
- (void)_animateReplyContextPreview:(id /* block */)a0;
- (void)_animateUpperBracket:(id /* block */)a0;
- (void)_animateLineExtension:(id /* block */)a0;
- (void)_animateLowerBracketToLoop:(id /* block */)a0;
- (void)performInsertion:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_createLineViewFrameForThreadGroupLayoutAttributes:(id)a0;
- (void)setAnimationPauseReasons:(long long)a0;
- (id)_createLinePathForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withThreadGroupLayoutAttributes:(id)a1;
- (id)_lineDescriptionForThreadGroupLayoutAttributes:(id)a0 setLineType:(BOOL)a1;
- (void)_drawStraightLineForPath:(id *)a0 withLayout:(id)a1 lineViewMaxY:(double)a2 isTerminal:(BOOL)a3;
- (void)_drawUpperBracketForPath:(id *)a0 withLayout:(id)a1 lineViewMaxX:(double)a2 lineViewMaxY:(double)a3;
- (void)_drawLoopForPath:(id *)a0 withLayout:(id)a1;
- (void)_drawLowerBracketForPath:(id *)a0 lineViewMaxX:(double)a1 lineViewMaxY:(double)a2;
- (void)_fadeInContactImageAlpha:(double)a0 atBeginTime:(double)a1;
- (void)_fadeInBalloonAlpha:(double)a0 atBeginTime:(double)a1;
- (id)animationWithKeyPath:(id)a0 fromValue:(id)a1 toValue:(id)a2 beginTime:(double)a3 duration:(double)a4 timingFunctionName:(id)a5;
- (id)_extendPath:(id *)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_slideContactImageWithTranslate:(double)a0 duration:(double)a1 beginTime:(double)a2;
- (long long)insertionAnimationType;
- (id)_drawLowerBracketLoopForPath:(id)a0 withLayout:(id)a1 lineViewMaxY:(double)a2;
- (double)insertionDurationForInsertionType:(long long)a0;
- (id)messageDisplayView;
- (id)animationWithKeyPath:(id)a0 fromValue:(id)a1 toValue:(id)a2 beginTime:(double)a3 duration:(double)a4 timingFunction:(id)a5;
- (void)willLayoutDrawerLabelFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (void)prepareForReuse;
- (id)description;
- (void)applyLayoutAttributes:(id)a0;

@end
