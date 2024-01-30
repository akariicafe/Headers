@class NSString, UITableViewDiffableDataSource, NTKFaceSlotComplicationTopLevelListProvider, NTKCFaceDetailComplicationCellProvider, NSIndexPath;
@protocol NTKCFaceDetailComplicationPickerViewControllerDelegate, NTKComplicationPickerListProvider;

@interface NTKCFaceDetailComplicationPickerViewController : UITableViewController <NTKComplicationPickerListProviderListener, NTKPeopleComplicationPickerViewControllerDelegate, NTKCFaceDetailComplicationPickerViewControllerDelegate>

@property (retain, nonatomic) UITableViewDiffableDataSource *dataSource;
@property (retain, nonatomic) NTKCFaceDetailComplicationCellProvider *cellProvider;
@property (readonly, nonatomic) id<NTKComplicationPickerListProvider> listProvider;
@property (readonly, nonatomic) NTKFaceSlotComplicationTopLevelListProvider *topLevelListProvider;
@property (retain, nonatomic) NSIndexPath *indexPathToScrollToAfterLayout;
@property (nonatomic) BOOL hasDoneInitialScrollToItem;
@property (readonly, nonatomic) NSString *slot;
@property (weak, nonatomic) id<NTKCFaceDetailComplicationPickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithFace:(id)a0 slot:(id)a1 selectedComplication:(id)a2;
- (void)faceDetailComplicationPickerViewController:(id)a0 didSelectComplication:(id)a1;
- (void)peopleComplicationPickerViewController:(id)a0 didSelectItem:(id)a1;
- (void)_configureWithSlot:(id)a0 listProvider:(id)a1 selectedComplication:(id)a2;
- (id)initWithSlot:(id)a0 listProvider:(id)a1 title:(id)a2 selectedComplication:(id)a3;
- (id)detailViewControllerForSectionInfo:(id)a0;
- (void)complicationPickerListProviderDidUpdate:(id)a0;

@end
