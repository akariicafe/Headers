@protocol SFEditableTableViewCellDelegate;

@interface SFEditableTableViewCell : UITableViewCell

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (weak, nonatomic) id<SFEditableTableViewCellDelegate> delegate;

- (void)copy:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (id)initWithEnabledState:(BOOL)a0;
- (void)_updateTextFieldTextColor;

@end
