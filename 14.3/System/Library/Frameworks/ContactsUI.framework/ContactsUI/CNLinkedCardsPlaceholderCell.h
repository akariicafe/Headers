@protocol CNPropertyCellDelegate;

@interface CNLinkedCardsPlaceholderCell : CNPropertyPlaceholderCell

@property (weak, nonatomic) id<CNPropertyCellDelegate> delegate;

- (void).cxx_destruct;
- (void)performDefaultAction;

@end
