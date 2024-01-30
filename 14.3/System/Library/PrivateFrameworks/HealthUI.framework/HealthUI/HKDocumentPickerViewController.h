@class HKTitledIconHeaderView, NSSet, HKSource, NSMutableSet, HKHealthStore, NSString, NSMutableArray;
@protocol HKDocumentPickerViewControllerDelegate;

@interface HKDocumentPickerViewController : HKTableViewController <HKCDADocumentTableViewCellDelegate, HKDataMetadataViewControllerDelegate> {
    NSMutableArray *_samplesList;
    long long _presentationStyle;
    HKHealthStore *_healthStore;
    BOOL _hasPendingDocumentFetch;
    BOOL _showCheckboxes;
    HKTitledIconHeaderView *_tableHeaderView;
}

@property (retain, nonatomic) NSMutableSet *enabledSamples;
@property (retain, nonatomic) HKSource *source;
@property (readonly, nonatomic) NSSet *allSamples;
@property (weak, nonatomic) id<HKDocumentPickerViewControllerDelegate> delegate;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateForCurrentSizeCategory;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)_done:(id)a0;
- (void)_cancel:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_finishWithError:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)_tableHeaderView;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)cdaDocumentTableViewCellDidChangeValue:(id)a0;
- (void)_addCancelAndDoneButtons;
- (id)initWithDocumentAuthorizations:(id)a0;
- (id)initWithDocuments:(id)a0 presentationStyle:(long long)a1;
- (BOOL)_isPrompting;
- (void)_enableDocumentSample:(id)a0 enabled:(BOOL)a1;
- (void)configureHeaderView:(id)a0;
- (BOOL)_needsSampleRequestDescription;
- (id)dataMetadataViewControllerForSample:(id)a0;
- (void)pushDetailForDocumentSample:(id)a0;

@end
