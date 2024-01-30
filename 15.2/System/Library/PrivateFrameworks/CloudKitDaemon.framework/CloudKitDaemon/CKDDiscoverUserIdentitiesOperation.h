@class NSArray;

@interface CKDDiscoverUserIdentitiesOperation : CKDOperation

@property (retain, nonatomic) NSArray *userIdentityLookupInfos;
@property (copy, nonatomic) id /* block */ discoverUserIdentitiesProgressBlock;

- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (void)main;
- (void).cxx_destruct;
- (void)_handleDiscoveredIdentity:(id)a0 lookupInfo:(id)a1 responseCode:(id)a2;
- (void)_discoverIdentitiesWithLookupInfos:(id)a0 completionBlock:(id /* block */)a1;

@end
