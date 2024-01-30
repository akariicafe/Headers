@class NSArray, NSString, NSDictionary, RecommendationActionController;

@interface StepByStepUIViewController_DevicePicker : StepByStepUIViewController <TableViewManagerDelegate> {
    NSDictionary *_selectedDevice;
    NSDictionary *_sourceNetwork;
    NSDictionary *_sourceBase;
    NSDictionary *_targetBase;
    BOOL _showSingleBaseTopo;
    BOOL showFullList;
}

@property (retain, nonatomic) NSArray *sortedDevices;
@property (nonatomic) NSString *connectionMedium;
@property (retain, nonatomic) RecommendationActionController *actionController;

- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)touchInCellAtIndexPath:(id)a0;
- (id)valueForItemOfType:(id)a0 atTypeIndex:(unsigned long long)a1 inCellWithTag:(long long)a2;
- (BOOL)showMoreOptions;
- (void)setupPickerTable;
- (void)updateSelections;
- (id)pickerContent;

@end
