@class NSString, NSDictionary, NSArray, DBIconImageCache, DBIconModel, DBIconManager;

@interface DBIconLayoutVehicleDataProvider : NSObject <DBIconModelApplicationDataSource, SBHIconManagerDelegate, CRSIconLayoutVehicleDataProviding>

@property (class, readonly, nonatomic) NSDictionary *defaultIconState;

@property (retain, nonatomic) NSString *vehicleID;
@property (retain, nonatomic) NSArray *allApps;
@property (retain, nonatomic) DBIconManager *iconManager;
@property (retain, nonatomic) DBIconModel *iconModel;
@property (retain, nonatomic) DBIconImageCache *iconImageCache;
@property (readonly, copy, nonatomic) NSArray *allApplicationIcons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)defaultIconStateForIconManager:(id)a0;
- (BOOL)iconManagerCanBeginIconDrags:(id)a0;
- (BOOL)isEditingAllowedForIconManager:(id)a0;
- (long long)interfaceOrientationForIconManager:(id)a0;
- (void).cxx_destruct;
- (Class)iconManager:(id)a0 folderControllerClassForFolderClass:(Class)a1 proposedClass:(Class)a2;
- (void)iconManager:(id)a0 launchIconForIconView:(id)a1;
- (void)getApplicationIconInformationForBundleID:(id)a0 completion:(id /* block */)a1;
- (void)getIconStateWithCompletion:(id /* block */)a0;
- (void)resetIconState;
- (void)setIconState:(id)a0;
- (id)initWithVehicleID:(id)a0 iconImageCache:(id)a1;

@end
