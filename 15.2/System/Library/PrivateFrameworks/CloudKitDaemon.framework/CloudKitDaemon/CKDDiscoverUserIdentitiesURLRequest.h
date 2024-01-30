@class NSArray, NSMutableDictionary;

@interface CKDDiscoverUserIdentitiesURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *infosToDiscover;
@property (retain, nonatomic) NSMutableDictionary *submittedInfos;
@property (nonatomic) BOOL wantsProtectionInfo;
@property (copy, nonatomic) id /* block */ progressBlock;

- (void)requestDidParseNodeFailure:(id)a0;
- (long long)databaseScope;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 lookupInfos:(id)a1;

@end
