@interface HealthExperienceUI.SummarySharingRelationshipDetailsViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController {
    void /* unknown type, empty encoding */ navigationBarTitleView;
    void /* unknown type, empty encoding */ healthExperienceStore;
    void /* unknown type, empty encoding */ selectedDataTypesContext;
    void /* unknown type, empty encoding */ relationshipDetailsDataSource;
    void /* unknown type, empty encoding */ sharingEntryStore;
    void /* unknown type, empty encoding */ sharingProfileInformation;
    void /* unknown type, empty encoding */ $__lazy_storage_$_doneButtonItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_activitySpinnerItem;
    void /* unknown type, empty encoding */ updateAuthorizationsCancellable;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ currentAuthorizations;
}

- (void)updateAuthorizationItems;
- (void)viewDidLoad;
- (id)initWithCollectionViewLayout:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)didTapCancel;

@end
