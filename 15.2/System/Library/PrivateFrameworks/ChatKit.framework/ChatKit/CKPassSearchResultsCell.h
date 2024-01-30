@interface CKPassSearchResultsCell : CKAttachmentSearchResultCell

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (double)editModeHorizontalOffset;
- (struct CGPoint { double x0; double x1; })avatarOffsetLTR;
- (struct CGPoint { double x0; double x1; })avatarOffsetRTL;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;

@end
