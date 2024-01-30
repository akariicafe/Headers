@protocol RTTUIReplyActionCellDelegate;

@interface RTTUIReplyActionCell : UITableViewCell

@property (weak, nonatomic) id<RTTUIReplyActionCellDelegate> delegate;

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 andDelegate:(id)a2;
- (double)adjustedHeight;

@end
