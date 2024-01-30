@class NSSet, NSString, Logger;

@interface PSCellularManagementCache : NSObject {
    Logger *_logger;
}

@property (retain) NSSet *managedCellDataAppCache;
@property (readonly, nonatomic) BOOL isGlobalDataModificationRestricted;
@property (readonly, nonatomic) BOOL hasManagedCellularData;
@property (readonly, nonatomic) NSString *mdmName;

+ (id)sharedInstance;

- (void)clearCache;
- (void)willEnterForeground;
- (id)getLogger;
- (id)initPrivate;
- (id)managedAppBundleIDs;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isManaged:(id)a0;
- (void)managedConfigurationSettingsDidChange;
- (void)managedConfigurationProfileListDidChange;
- (id)managedCellDataAppBundleIDs;

@end
