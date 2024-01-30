@class NSSet, NSString;

@interface PSCellularManagementCache : NSObject

@property (retain) NSSet *managedCellDataAppCache;
@property (readonly, nonatomic) BOOL isGlobalDataModificationRestricted;
@property (readonly, nonatomic) BOOL hasManagedCellularData;
@property (readonly, nonatomic) NSString *mdmName;

+ (id)sharedInstance;

- (id)managedAppBundleIDs;
- (void)clearCache;
- (id)initPrivate;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isManaged:(id)a0;
- (void)willEnterForeground;
- (void)managedConfigurationSettingsDidChange;
- (void)managedConfigurationProfileListDidChange;
- (id)managedCellDataAppBundleIDs;

@end
