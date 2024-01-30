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

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)_didSelectItemAtIndexPath:(id)a0;
- (id)initWithDetailConfiguration:(id)a0;
- (void)scrollToSelectedIdentifierAnimated:(BOOL)a0;

@end
