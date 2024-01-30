@interface EKCalendarItemEditorTableView : UITableView

@property (nonatomic) BOOL isReloading;

- (void)reloadData;
- (void)scrollToRowAtIndexPath:(id)a0 atScrollPosition:(long long)a1 animated:(BOOL)a2;

@end
