@class NSString, NSArray, CKQueryCursor, NSError, FCCKContentDatabase;

@interface FCCKTagSearchQueryOperation : FCOperation

@property (retain, nonatomic) NSString *tagTypeString;
@property (retain, nonatomic) NSArray *resultRecords;
@property (retain, nonatomic) CKQueryCursor *resultCursor;
@property (retain, nonatomic) NSError *resultError;
@property (retain, nonatomic) FCCKContentDatabase *database;
@property (nonatomic) unsigned long long resultsLimit;
@property (copy, nonatomic) NSString *searchString;
@property (nonatomic) long long tagType;
@property (retain, nonatomic) CKQueryCursor *cursor;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) id /* block */ queryCompletionHandler;

- (void)prepareOperation;
- (void)resetForRetry;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (id)_constructTagSearchQuery;

@end
