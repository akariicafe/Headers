@class NSString, NSArray, PXSelectionCoordinator, NSOrderedSet, PHPhotoLibrary, PXPeopleBootstrapContext, NSMutableArray, NSMutableOrderedSet, PXPeoplePickerViewController;
@protocol PXPeoplePickerConfigurationControllerHandler;

@interface PXPeoplePickerConfigurationController : NSObject <PXPeoplePickerConfigurationControllerDelegate, PXPeopleFlowViewControllerActionDelegate, PXPeoplePickerViewControllerActionHandler>

@property (readonly, nonatomic) NSArray *peopleConfigurations;
@property (readonly, weak, nonatomic) id<PXPeoplePickerConfigurationControllerHandler> configControllerHandler;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) long long currentPeopleConfigIndex;
@property (nonatomic) long long currentViewControllerIndex;
@property (readonly, nonatomic) NSMutableArray *viewControllers;
@property (readonly, nonatomic) NSMutableOrderedSet *mutableAddedObjectIDs;
@property (readonly, nonatomic) NSMutableArray *mutableAddedLocalIdentifiers;
@property (retain, nonatomic) PXPeopleBootstrapContext *context;
@property (nonatomic) long long buttonType;
@property (readonly, nonatomic) PXPeoplePickerViewController *pickerViewController;
@property (copy, nonatomic) NSArray *identifiers;
@property (copy, nonatomic) NSArray *preselectedIdentifiers;
@property (retain, nonatomic) PXSelectionCoordinator *selectionCoordinator;
@property (nonatomic) BOOL shouldActLikeSingleSelectPicker;
@property (readonly, nonatomic) NSOrderedSet *addedObjectIDs;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)currentViewController;
- (void)decrementViewControllers;
- (void)didAdvanceWithSender:(id)a0;
- (id)incrementViewControllersForPerson:(id)a0;
- (id)initWithPeopleConfigurations:(id)a0 configControllerHandler:(id)a1 photoLibrary:(id)a2;
- (void)peoplePicker:(id)a0 didTapItem:(id)a1;
- (void)requestAdvanceToNextInFlow;
- (void)requestCancel;
- (void)requestDone;
- (void)setAdvanceButtonEnabled:(BOOL)a0;
- (void)viewControllerWillBePopped:(id)a0;

@end
