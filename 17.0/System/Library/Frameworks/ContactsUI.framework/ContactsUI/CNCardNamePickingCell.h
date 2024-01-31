@class UILabel;

@interface CNCardNamePickingCell : CNLabeledCell

@property (readonly, nonatomic) UILabel *sourceLabel;
@property (readonly, nonatomic) UILabel *nameLabel;

- (id)labelView;
- (BOOL)isSuggested;
- (void).cxx_destruct;
- (void)setCardGroupItem:(id)a0;
- (id)valueView;

@end
