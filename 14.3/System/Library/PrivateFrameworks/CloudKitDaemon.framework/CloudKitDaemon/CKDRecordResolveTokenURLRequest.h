@class NSArray, NSMutableDictionary, NSSet;

@interface CKDRecordResolveTokenURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *lookupInfos;
@property (retain, nonatomic) NSMutableDictionary *lookupInfosByRequestID;
@property (retain, nonatomic) NSSet *rootRecordDesiredKeySet;
@property (nonatomic) BOOL shouldFetchRootRecord;
@property (copy, nonatomic) id /* block */ tokenResolveBlock;

- (id)applicationBundleIdentifierForContainerAccess;
- (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)applicationBundleIdentifierForNetworkAttribution;
- (id)generateRequestOperations;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestOperationClasses;
- (id)initWithOperation:(id)a0 shortTokenLookupInfos:(id)a1;

@end
