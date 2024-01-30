@interface CKConversationListCollectionViewRecoverableConversationCell : CKConversationListCollectionViewConversationCell

+ (id)reuseIdentifier;
+ (id)reuseIdentifierForAXFontSize:(BOOL)a0;
+ (id)reuseIdentifiers;

- (BOOL)shouldAlwaysHideUnreadIndicator;
- (unsigned long long)_daysUntilDeletion:(id)a0;
- (BOOL)shouldAlwaysHideAvatar;
- (BOOL)shouldAppearAsRecoverableConversation;
- (void)updateDateLabel:(id)a0 conversation:(id)a1;

@end
