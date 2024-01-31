@protocol CNPropertyCellDelegate;

@interface CNGroupMembershipPlaceholderCell : CNPropertyPlaceholderCell

@property (weak, nonatomic) id<CNPropertyCellDelegate> delegate;

- (void).cxx_destruct;
- (void)performDefaultAction;

@end
