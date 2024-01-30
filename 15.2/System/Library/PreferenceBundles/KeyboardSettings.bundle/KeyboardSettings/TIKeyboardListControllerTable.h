@class NSMutableArray;

@interface TIKeyboardListControllerTable : UITableView {
    NSMutableArray *_todoList;
}

- (void)_setEditing:(BOOL)a0 animated:(BOOL)a1 forced:(BOOL)a2;
- (void)dealloc;
- (void)addEditingChangeHandler:(id /* block */)a0;

@end
