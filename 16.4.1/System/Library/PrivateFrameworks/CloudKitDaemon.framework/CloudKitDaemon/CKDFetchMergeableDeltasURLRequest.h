@class NSArray, NSMutableDictionary, NSDictionary;

@interface CKDFetchMergeableDeltasURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *mergeableValueIDs;
@property (retain, nonatomic) NSMutableDictionary *mergeableValueIDsByRequestID;
@property (readonly, nonatomic) NSDictionary *previousContinuationTokens;
@property (copy, nonatomic) id /* block */ deltasFetchedBlock;

- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (void)requestDidParseNodeFailure:(id)a0;
- (BOOL)allowsAnonymousAccount;
- (id)zoneIDsToLock;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 mergeableValueIDs:(id)a1 previousContinuationTokens:(id)a2;
- (id)anonymousUserIDForHTTPHeader;

@end
