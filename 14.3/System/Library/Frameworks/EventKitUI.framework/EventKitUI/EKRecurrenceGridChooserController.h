@class NSString, EKUIDividedGridViewTableViewCell;

@interface EKRecurrenceGridChooserController : EKRecurrenceChooserController <EKUIDividedGridViewControllerDelegate> {
    EKUIDividedGridViewTableViewCell *_tableViewCell;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForDisplay;
- (void).cxx_destruct;
- (id)tableViewCell;
- (void)dividedGridViewControllerDidLayout:(id)a0;
- (void)dividedGridViewController:(id)a0 didSelectCell:(id)a1 atIndex:(long long)a2;
- (id)cellForRow:(long long)a0;
- (double)heightForRow:(long long)a0;
- (void)refreshCells;
- (id)cellLabels;
- (long long)gridViewType;
- (void)selectCell:(id)a0 atIndex:(long long)a1;
- (BOOL)drawBackgroundForRow:(long long)a0;
- (id)allCells;

@end
