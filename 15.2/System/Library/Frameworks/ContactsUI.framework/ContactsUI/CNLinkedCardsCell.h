@class UILabel;
@protocol CNPropertyCellDelegate;

@interface CNLinkedCardsCell : CNLabeledCell

@property (readonly, nonatomic) UILabel *sourceLabel;
@property (readonly, nonatomic) UILabel *nameLabel;
@property (weak, nonatomic) id<CNPropertyCellDelegate> delegate;

+ (BOOL)wantsChevron;

- (id)labelView;
- (id)valueView;
- (void).cxx_destruct;
- (void)updateConstraints;
- (BOOL)shouldPerformDefaultAction;
- (void)setCardGroupItem:(id)a0;
- (void)performDefaultAction;

@end
