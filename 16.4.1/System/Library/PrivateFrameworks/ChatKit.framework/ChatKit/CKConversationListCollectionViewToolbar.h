@interface CKConversationListCollectionViewToolbar : UIToolbar

@property (nonatomic) BOOL shouldExpandHeight;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)contractHeight;
- (void)expandHeight;

@end
