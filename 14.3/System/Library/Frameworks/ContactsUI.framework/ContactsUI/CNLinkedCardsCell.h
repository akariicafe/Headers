@class UILabel;
@protocol CNPropertyCellDelegate;

@interface CNLinkedCardsCell : CNLabeledCell

@property (readonly, nonatomic) UILabel *sourceLabel;
@property (readonly, nonatomic) UILabel *nameLabel;
@property (weak, nonatomic) id<CNPropertyCellDelegate> delegate;

+ (BOOL)wantsChevron;

- (void).cxx_destruct;
- (id)labelView;
- (void)updateConstraints;
- (id)valueView;
- (BOOL)shouldPerformDefaultAction;
- (void)setCardGroupItem:(id)a0;
- (void)performDefaultAction;

@end
