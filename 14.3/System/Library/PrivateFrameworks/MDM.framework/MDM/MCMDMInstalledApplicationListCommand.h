@class NSDictionary, NSSet;
@protocol MCMDMAppItemsDataSource;

@interface MCMDMInstalledApplicationListCommand : NSObject

@property (nonatomic) BOOL isUserEnrollment;
@property (retain, nonatomic) id<MCMDMAppItemsDataSource> dataSource;
@property (copy, nonatomic) NSDictionary *request;
@property (copy, nonatomic) NSSet *appsRequested;
@property (nonatomic) BOOL shouldReturnManagedAppsOnly;
@property (copy, nonatomic) NSSet *itemsRequested;
@property (copy, nonatomic) NSDictionary *appItems;
@property (copy, nonatomic) NSDictionary *response;

+ (id)allItems;
+ (id)itemsThatMustAlwaysBeReturned;

- (void)_reset;
- (void).cxx_destruct;
- (id)responseForRequest:(id)a0;
- (void)_processArguments;
- (void)fetchAppProperties;
- (void)_processIdentifiersArgument;
- (void)_processManagedAppsOnlyArgument;
- (void)_processItemsArgument;
- (void)_validateRequestDictionaryIsPresentAndADictionary;

@end
