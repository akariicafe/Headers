@class NSArray, NSDictionary, FCInterestToken, FCRecordSource;

@interface FCRecordsFetchOperation : FCFetchOperation {
    FCRecordSource *_recordSource;
    NSArray *_recordIdentifiers;
    NSArray *_ignoreCacheForRecordIDs;
    NSDictionary *_holdTokens;
    FCInterestToken *_fetchToken;
    FCInterestToken *_refreshToken;
}

- (id)initWithRecordSource:(id)a0 recordIdentifiers:(id)a1;
- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (id)initWithRecordSource:(id)a0 recordIdentifiers:(id)a1 ignoreCacheForRecordIDs:(id)a2;

@end
