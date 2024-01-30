@protocol SFEditableTableViewCellDelegate;

@interface SFEditableTableViewCell : UITableViewCell

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (weak, nonatomic) id<SFEditableTableViewCellDelegate> delegate;

- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)copy:(id)a0;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)_updateTextFieldTextColor;
- (id)initWithEnabledState:(BOOL)a0;

@end
