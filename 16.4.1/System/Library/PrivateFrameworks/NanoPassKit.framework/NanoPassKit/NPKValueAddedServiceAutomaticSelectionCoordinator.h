@class NSString;
@protocol NPKValueAddedServiceAutomaticSelectionCoordinatorDelegate, NPKPassesDataSource;

@interface NPKValueAddedServiceAutomaticSelectionCoordinator : NSObject <NPKPassesDataSourceObserver>

@property (weak, nonatomic) id<NPKValueAddedServiceAutomaticSelectionCoordinatorDelegate> delegate;
@property (weak, nonatomic) id<NPKPassesDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_updateAutomaticSelectionPasses;
- (void)_handleWalletPreferencesChanged:(id)a0;
- (id)initWithDelegate:(id)a0 passesDataSource:(id)a1;
- (void)passesDataSource:(id)a0 didAddPasses:(id)a1;
- (void)passesDataSource:(id)a0 didRemovePasses:(id)a1;
- (void)passesDataSource:(id)a0 didUpdatePasses:(id)a1;
- (void)passesDataSource:(id)a0 didUpdateSettingsForPass:(id)a1;
- (void)passesDataSourceDidReloadPasses:(id)a0;
- (void)passesDataSourceDidReorderPasses:(id)a0;

@end
