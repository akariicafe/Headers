@class NSArray, NSString, NSPredicate, NSNumber, FPQueryEnumerationSettings;

@interface FPQueryCollection : FPItemCollection <FPSpotlightDataSourceDelegate> {
    Class _descriptorClass;
}

@property (readonly) FPQueryEnumerationSettings *settings;
@property (readonly) NSPredicate *predicate;
@property (readonly, nonatomic) unsigned long long itemsOrigin;
@property (copy) NSNumber *desiredNumberOfItems;
@property (copy) NSArray *allowedProviderIdentifiers;
@property (copy) NSArray *excludedFileTypes;
@property (copy) NSArray *allowedFileTypes;
@property (copy) NSString *tagIdentifier;
@property (copy) NSString *descriptionName;

+ (void)enableMountPointQueries;
+ (void)disableMountPointQueries;
+ (void)suspendAllQueries;
+ (void)resumeAllQueries;

- (void).cxx_destruct;
- (id)description;
- (id)scopedSearchQuery;
- (id)createDataSourceWithSortDescriptors:(id)a0;
- (id)initWithQueryDescriptorClass:(Class)a0 predicate:(id)a1 paced:(BOOL)a2;
- (id)_enumerationSettingsPredicate;
- (id)_createDescriptorWithSortDescriptors:(id)a0;
- (void)dataSource:(id)a0 didChangeItemsOrigin:(unsigned long long)a1;
- (id)initWithQueryDescriptorClass:(Class)a0;
- (id)initWithQueryDescriptorClass:(Class)a0 predicate:(id)a1;
- (id)underlyingQueryStringForMountPoint:(id)a0;

@end
