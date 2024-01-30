@class UILabel;
@protocol CNPropertyCellDelegate;

@interface CNLinkedCardsCell : CNLabeledCell

@property (readonly, nonatomic) UILabel *sourceLabel;
@property (readonly, nonatomic) UILabel *nameLabel;
@property (weak, nonatomic) id<CNPropertyCellDelegate> delegate;

+ (BOOL)wantsChevron;

- (void)updateConstraints;
- (id)labelView;
- (void).cxx_destruct;
- (void)performDefaultAction;
- (void)setCardGroupItem:(id)a0;
- (BOOL)shouldPerformDefaultAction;
- (id)valueView;

@end
