@class NSAttributedString;

@interface CKTranscriptAbstractLabelCell : CKTranscriptCell

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) BOOL wantsContactImageLayout;
@property (nonatomic) BOOL wantsOffsetForReplyLine;

+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 attributedText:(id)a1 displayScale:(double)a2;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentAlignmentRect;
- (void)layoutSubviewsForContents;
- (void)layoutSubviewsForAlignmentContents;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)cellView;
- (id)label;
- (void)addFilter:(id)a0;
- (void)prepareForReuse;
- (BOOL)wantsDrawerLayout;
- (void)clearFilters;

@end
