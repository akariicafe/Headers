@class NSArray, NSMutableDictionary;

@interface CKDUploadMergeableDeltasURLRequest : CKDURLRequest

@property (retain, nonatomic) NSMutableDictionary *deltasByRequestID;
@property (retain, nonatomic) NSMutableDictionary *replacementRequestsByRequestID;
@property (readonly, copy, nonatomic) NSArray *deltas;
@property (readonly, copy, nonatomic) NSArray *replacementRequests;
@property (copy, nonatomic) id /* block */ perDeltaCompletionBlock;
@property (copy, nonatomic) id /* block */ perReplaceDeltasRequestCompletionBlock;

- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (void)requestDidParseNodeFailure:(id)a0;
- (BOOL)allowsAnonymousAccount;
- (id)zoneIDsToLock;
- (void).cxx_destruct;
- (id)anonymousUserIDForHTTPHeader;
- (id)initWithOperation:(id)a0 deltas:(id)a1 replacementRequests:(id)a2;

@end
