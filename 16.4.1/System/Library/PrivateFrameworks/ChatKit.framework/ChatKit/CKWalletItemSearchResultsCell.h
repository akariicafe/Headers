@interface CKWalletItemSearchResultsCell : CKAttachmentSearchResultCell

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (struct CGPoint { double x0; double x1; })avatarOffsetRTL;
- (struct CGPoint { double x0; double x1; })avatarOffsetLTR;
- (double)editModeHorizontalOffset;

@end
