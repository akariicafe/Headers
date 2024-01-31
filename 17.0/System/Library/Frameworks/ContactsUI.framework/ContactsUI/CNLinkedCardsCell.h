@class UILabel;
@protocol CNPropertyCellDelegate;

@interface CNLinkedCardsCell : CNLabeledCell

@property (readonly, nonatomic) UILabel *sourceLabel;
@property (readonly, nonatomic) UILabel *nameLabel;
@property (weak, nonatomic) id<CNPropertyCellDelegate> delegate;

+ (BOOL)wantsChevron;

- (id)labelView;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)performDefaultAction;
- (void)setCardGroupItem:(id)a0;
- (BOOL)shouldPerformDefaultAction;
- (id)titleForContact:(id)a0;
- (id)valueView;

@end
