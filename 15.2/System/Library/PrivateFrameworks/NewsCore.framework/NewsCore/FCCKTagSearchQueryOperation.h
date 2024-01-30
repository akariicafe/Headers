@class NSString, NSArray, CKQueryCursor, FCCKContentDatabase, NSError;

@interface FCCKTagSearchQueryOperation : FCOperation {
    FCCKContentDatabase *_database;
    unsigned long long _resultsLimit;
    NSString *_searchString;
    long long _tagType;
    CKQueryCursor *_cursor;
    NSArray *_desiredKeys;
    NSString *_locale;
    id /* block */ _queryCompletionHandler;
    NSString *_tagTypeString;
    NSArray *_resultRecords;
    CKQueryCursor *_resultCursor;
    NSError *_resultError;
}

- (void)performOperation;
- (BOOL)validateOperation;
- (void)prepareOperation;
- (void)resetForRetry;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;

@end
