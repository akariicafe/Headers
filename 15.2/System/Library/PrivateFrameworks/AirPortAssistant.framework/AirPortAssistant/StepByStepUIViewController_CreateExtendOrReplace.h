@interface StepByStepUIViewController_CreateExtendOrReplace : StepByStepUIViewController <TableViewManagerDelegate>

- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void)touchInCellAtIndexPath:(id)a0;
- (void)setupInitialTableHeaderConfiguration;
- (void)handleSelectorChoiceWithTag:(unsigned long long)a0;
- (void)setupTable;

@end
