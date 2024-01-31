@class NSString, CNAuthorization, NSXPCConnection;
@protocol CNKeyboardStateMonitor, CNXPCDataMapperService, CNContactsLogger;

@interface CNXPCDataMapper : NSObject <CNDataMapper> {
    NSXPCConnection *_connection;
    id<CNContactsLogger> _logger;
    id<CNXPCDataMapperService> _serviceProxy;
    CNAuthorization *_authorization;
    id<CNKeyboardStateMonitor> _keyboardStateMonitor;
}

@property (readonly) BOOL shouldLogContactsAccess;
@property (retain, nonatomic) NSString *legacyTetheredSyncDeviceAnchor;
@property (retain, nonatomic) NSString *legacyTetheredSyncComputerAnchor;
@property (readonly, nonatomic) BOOL shouldLogPrivacyAccountingAccessEvents;
@property (readonly, nonatomic) BOOL shouldCaptureMetricsForQueries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contactBuffersDecoderForFetchRequest:(id)a0;
+ (id)serviceProtocolInterface;

- (id)unifiedContactCountWithError:(id *)a0;
- (id)requestExtensionCommand:(id)a0 error:(id *)a1;
- (BOOL)unregisterChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;
- (id)identifierWithError:(id *)a0;
- (id)currentHistoryAnchor;
- (BOOL)setMeContact:(id)a0 error:(id *)a1;
- (BOOL)setMeContact:(id)a0 forContainer:(id)a1 error:(id *)a2;
- (id)userActivityUserInfoForContact:(id)a0;
- (BOOL)setBestMeIfNeededForGivenName:(id)a0 familyName:(id)a1 email:(id)a2 error:(id *)a3;
- (id)contactObservableForFetchRequest:(id)a0;
- (id)currentHistoryToken;
- (id)executeFetchRequest:(id)a0 progressiveResults:(id /* block */)a1 completion:(id /* block */)a2;
- (id)sectionListOffsetsForSortOrder:(long long)a0 error:(id *)a1;
- (BOOL)executeChangeHistoryClearRequest:(id)a0 error:(id *)a1;
- (BOOL)registerChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;
- (id)contactWithUserActivityUserInfo:(id)a0 keysToFetch:(id)a1;
- (BOOL)executeSaveRequest:(id)a0 error:(id *)a1;
- (id)changeHistoryWithFetchRequest:(id)a0 error:(id *)a1;
- (BOOL)requestAccessForEntityType:(long long)a0 error:(id *)a1;
- (id)contactCountForFetchRequest:(id)a0 error:(id *)a1;
- (id)init;
- (id)containersMatchingPredicate:(id)a0 error:(id *)a1;
- (id)groupsMatchingPredicate:(id)a0 error:(id *)a1;
- (BOOL)executeSaveRequest:(id)a0 response:(id *)a1 authorizationContext:(id)a2 error:(id *)a3;
- (id)serverSearchContainersMatchingPredicate:(id)a0 error:(id *)a1;
- (id)meContactIdentifiers:(id *)a0;
- (void)requestAccessForEntityType:(long long)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (id)accountsMatchingPredicate:(id)a0 error:(id *)a1;
- (id)policyForContainerWithIdentifier:(id)a0 error:(id *)a1;
- (id)policyWithDescription:(id)a0 error:(id *)a1;
- (id)defaultContainerIdentifier;
- (id)subgroupsOfGroupWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)writeFavoritesPropertyListData:(id)a0 toPath:(id)a1 error:(id *)a2;
- (id)initWithConfiguration:(id)a0;
- (id)favoritesEntryDictionariesAtPath:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 connection:(id)a1;
- (id)authorizedKeysForContactKeys:(id)a0 error:(id *)a1;

@end
