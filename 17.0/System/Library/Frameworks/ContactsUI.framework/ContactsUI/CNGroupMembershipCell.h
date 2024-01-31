@class UILabel;
@protocol CNPropertyCellDelegate;

@interface CNGroupMembershipCell : CNLabeledCell

@property (readonly, nonatomic) UILabel *parentGroupNameLabel;
@property (weak, nonatomic) id<CNPropertyCellDelegate> delegate;

+ (BOOL)wantsHorizontalLayout;

- (id)labelView;
- (void)updateConstraints;
- (void).cxx_destruct;
- (BOOL)allowsCellSelection;
- (void)setCardGroupItem:(id)a0;

@end
