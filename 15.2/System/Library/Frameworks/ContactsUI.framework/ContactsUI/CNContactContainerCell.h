@class UILabel;
@protocol CNPropertyCellDelegate;

@interface CNContactContainerCell : CNLabeledCell

@property (readonly, nonatomic) UILabel *accountLabel;
@property (readonly, nonatomic) UILabel *accountNameLabel;
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
