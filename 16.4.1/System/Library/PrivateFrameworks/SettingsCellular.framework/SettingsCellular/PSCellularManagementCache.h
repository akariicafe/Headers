@class NSSet, NSString;

@interface PSCellularManagementCache : NSObject

@property (retain) NSSet *managedCellDataAppCache;
@property (readonly, nonatomic) BOOL isGlobalDataModificationRestricted;
@property (readonly, nonatomic) BOOL hasManagedCellularData;
@property (readonly, nonatomic) NSString *mdmName;

+ (id)sharedInstance;

- (void)willEnterForeground;
- (void)clearCache;
- (id)getLogger;
- (id)managedAppBundleIDs;
- (id)initPrivate;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isManaged:(id)a0;
- (void)managedConfigurationProfileListDidChange;
- (void)managedConfigurationSettingsDidChange;
- (id)managedCellDataAppBundleIDs;

@end
