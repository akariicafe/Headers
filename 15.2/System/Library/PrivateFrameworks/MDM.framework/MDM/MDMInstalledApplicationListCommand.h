@class NSDictionary, NSSet;
@protocol MDMAppItemsDataSource;

@interface MDMInstalledApplicationListCommand : NSObject

@property (nonatomic) BOOL isUserEnrollment;
@property (retain, nonatomic) id<MDMAppItemsDataSource> dataSource;
@property (copy, nonatomic) NSDictionary *request;
@property (copy, nonatomic) NSSet *appsRequested;
@property (nonatomic) BOOL shouldReturnManagedAppsOnly;
@property (copy, nonatomic) NSSet *itemsRequested;
@property (copy, nonatomic) NSDictionary *appItems;
@property (copy, nonatomic) NSDictionary *response;

+ (id)allItems;
+ (id)itemsThatMustAlwaysBeReturned;

- (void)_reset;
- (id)responseForRequest:(id)a0;
- (void).cxx_destruct;
- (void)_processArguments;
- (void)fetchAppProperties;
- (void)_processIdentifiersArgument;
- (void)_processManagedAppsOnlyArgument;
- (void)_processItemsArgument;
- (void)_validateRequestDictionaryIsPresentAndADictionary;

@end
