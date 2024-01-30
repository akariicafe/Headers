@interface CKConversationListCollectionViewRecentlyDeletedConversationCell : CKConversationListCollectionViewRecoverableConversationCell

- (BOOL)shouldAlwaysHideUnreadIndicator;
- (id)_attributedStringForRecoverableSummaryLabelWithText:(id)a0;
- (unsigned long long)_daysUntilDeletion:(id)a0;
- (BOOL)shouldAlwaysHideAvatar;
- (void)updateSummaryLabel:(id)a0 conversation:(id)a1 fastPreview:(BOOL)a2;

@end
