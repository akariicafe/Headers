@class NSString, NSSet, NSDictionary, DMFFetchAppsRequest, NSArray, DMFConnection, DMFFetchAppsResultObject;

@interface MDMAppPropertyShim : NSObject <MDMAppItemsDataSource>

@property (copy, nonatomic) NSSet *appsRequested;
@property (nonatomic) BOOL shouldReturnManagedAppsOnly;
@property (copy, nonatomic) NSSet *itemsRequested;
@property (copy, nonatomic) NSDictionary *appItems;
@property (retain, nonatomic) DMFConnection *deviceManagementUserConnection;
@property (retain, nonatomic) DMFFetchAppsRequest *request;
@property (copy, nonatomic) NSArray *keysForRequest;
@property (retain, nonatomic) DMFFetchAppsResultObject *response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_dmdKeysToRequestToGetItems:(id)a0;
+ (id)_itemKeyToDMDKeyMappingTable;

- (void).cxx_destruct;
- (void)_executeRequest;
- (void)_createAppItems;
- (id)_appDictionaryFromApp:(id)a0;
- (void)_createKeysForRequest;
- (void)_createRequest;
- (void)fetchAppItems;

@end
