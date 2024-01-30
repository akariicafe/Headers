@interface StepByStepUIViewController_CreateExtendOrReplace : StepByStepUIViewController <TableViewManagerDelegate>

- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)handleSelectorChoiceWithTag:(unsigned long long)a0;
- (void)setupInitialTableHeaderConfiguration;
- (void)setupTable;
- (void)touchInCellAtIndexPath:(id)a0;

@end
