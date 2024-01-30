@class UILabel;
@protocol CNPropertyCellDelegate;

@interface CNContactContainerCell : CNLabeledCell

@property (readonly, nonatomic) UILabel *accountLabel;
@property (readonly, nonatomic) UILabel *accountNameLabel;
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
