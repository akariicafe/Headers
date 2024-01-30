@class UITableViewCell, UITableViewCellEditControl, UITableViewCellReorderControl, UIView;

@interface UITableViewCellEditingData : NSObject {
    UITableViewCell *_cell;
    long long _editingStyle;
    UITableViewCellEditControl *_editControl;
    UITableViewCellReorderControl *_reorderControl;
    UIView *_reorderSeparatorView;
}

@property (readonly, nonatomic, getter=isDataRequired) BOOL dataRequired;
@property (readonly, nonatomic) BOOL wantsMaskingWhileAnimatingDisabled;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTableViewCell:(id)a0 editingStyle:(long long)a1;
- (id)reorderControl:(BOOL)a0;
- (id)editControl:(BOOL)a0;
- (id)reorderSeparatorView:(BOOL)a0;

@end
