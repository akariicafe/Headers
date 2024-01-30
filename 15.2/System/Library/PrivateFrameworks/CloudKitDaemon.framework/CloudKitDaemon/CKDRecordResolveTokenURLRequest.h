@class NSArray, NSMutableDictionary, NSSet;

@interface CKDRecordResolveTokenURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *lookupInfos;
@property (retain, nonatomic) NSMutableDictionary *lookupInfosByRequestID;
@property (retain, nonatomic) NSSet *rootRecordDesiredKeySet;
@property (nonatomic) BOOL shouldFetchRootRecord;
@property (copy, nonatomic) id /* block */ tokenResolveBlock;

- (void)requestDidParseNodeFailure:(id)a0;
- (BOOL)requiresCKAnonymousUserIDs;
- (long long)databaseScope;
- (id)applicationBundleIdentifierForNetworkAttribution;
- (id)applicationBundleIdentifierForContainerAccess;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (void).cxx_destruct;
- (id)sourceApplicationSecondaryIdentifier;
- (BOOL)sendRequestAnonymously;
- (id)initWithOperation:(id)a0 shortTokenLookupInfos:(id)a1;

@end
