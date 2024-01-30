@class NSString, PSTextEditingCell, UITextField, UITableView;

@interface PSTextEditingPane : PSEditingPane <UITableViewDelegate, UITableViewDataSource> {
    UITableView *_table;
    PSTextEditingCell *_cell;
    UITextField *_textField;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)becomeFirstResponder;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)preferenceValue;
- (void)setPreferenceSpecifier:(id)a0;
- (void)setPreferenceValue:(id)a0;

@end
