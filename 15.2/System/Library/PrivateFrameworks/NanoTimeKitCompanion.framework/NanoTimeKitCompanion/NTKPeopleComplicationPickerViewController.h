@class NTKPeopleDetailComplicationPickerDataSource, NSString, NTKComplicationPickerDetailViewConfiguration, UITableView;
@protocol NTKPeopleComplicationPickerViewControllerDelegate;

@interface NTKPeopleComplicationPickerViewController : UIViewController <UITableViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSString *parentSectionName;
@property (retain, nonatomic) NTKComplicationPickerDetailViewConfiguration *configuration;
@property (retain, nonatomic) NTKPeopleDetailComplicationPickerDataSource *dataSource;
@property (nonatomic) BOOL isFirstTimeVisible;
@property (weak, nonatomic) id<NTKPeopleComplicationPickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollToSelectedIdentifierAnimated:(BOOL)a0;
- (void)_didSelectItemAtIndexPath:(id)a0;
- (id)initWithDetailConfiguration:(id)a0;

@end
