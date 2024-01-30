@class NSArray, NSString, NSMutableOrderedSet, NSMutableDictionary, PHPerformChangesInstrumentation;
@protocol PLPerformChangesRequestService;

@interface PHPerformChangesRequest : PLXPCObject <PHPerformChangesRequest, PLPerformChangesRequestService, PLPerformChangesRequest> {
    BOOL _inService;
    id<PLPerformChangesRequestService> _service;
    NSMutableOrderedSet *_failedOnDemandRequests;
    NSMutableDictionary *_changeRequestsByUUID;
}

@property (readonly, nonatomic) BOOL hasChangeRequests;
@property (retain, nonatomic) PHPerformChangesInstrumentation *instrumentation;
@property (readonly, nonatomic) NSMutableOrderedSet *inserts;
@property (readonly, nonatomic) NSMutableOrderedSet *updates;
@property (readonly, nonatomic) NSMutableOrderedSet *deletes;
@property (readonly, nonatomic) NSArray *requestSets;
@property (readonly, nonatomic) long long accessScopeOptionsRequiredForRequestedChanges;
@property (readonly, nonatomic) long long accessLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct _xpc_type_s { } *)type;

- (void)didSendChangesToServiceWithResult:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (void)executeWithService:(id)a0 reply:(id /* block */)a1;
- (id)clientBundleID;
- (void)recordDeleteRequest:(id)a0;
- (id)clientDescription;
- (id)errorWithLocalizedDescription:(id)a0;
- (id)clientDisplayName;
- (id)_allChangeRequests;
- (long long)determineAuthorizationStatusForChanges;
- (BOOL)_isSupportedLimitedLibraryChangeRequest:(id)a0;
- (void)executeWithLibraryServicesManager:(id)a0 libraryName:(const char *)a1 executionContext:(id)a2 reply:(id /* block */)a3;
- (void)discardUnsupportedLimitedLibraryChangeRequests;
- (id)changeRequestForUUID:(id)a0;
- (id)_failureWithError:(id)a0;
- (void)decodeWithService:(id)a0 clientAuthorization:(id)a1;
- (void)setChangeRequest:(id)a0 forUUID:(id)a1;
- (void)notifyChangesTransactionFailedWithLazyPhotoLibrary:(id)a0 error:(id)a1;
- (id)libraryServicesManager;
- (void)recordFailedOnDemandRequest:(id)a0;
- (void).cxx_destruct;
- (id)persistentStoreCoordinator;
- (void)recordInsertRequest:(id)a0;
- (void)recordUpdateRequest:(id)a0;

@end
