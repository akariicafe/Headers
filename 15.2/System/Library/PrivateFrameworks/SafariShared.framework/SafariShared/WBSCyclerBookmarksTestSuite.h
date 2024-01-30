@class NSString, NSArray, WBSCyclerBookmarkOperationContext, WBSCyclerTestSuiteBookmarkAuxiliary, WBSCyclerBookmarkListRepresentation;

@interface WBSCyclerBookmarksTestSuite : NSObject <WBSCyclerTestSuite> {
    NSArray *_operations;
    NSArray *_relativeProbabilitiesForOperations;
    WBSCyclerBookmarkOperationContext *_operationContext;
    WBSCyclerTestSuiteBookmarkAuxiliary *_bookmarkAuxiliary;
    unsigned long long _iterationCount;
    WBSCyclerBookmarkListRepresentation *_expectedTopLevelBookmarksFromPreviousIteration;
}

@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)setValue:(id)a0 forConfigurationKey:(id)a1;

- (BOOL)canHandleRequest:(id)a0;
- (void)tearDown;
- (void)setUp;
- (id)_descriptionForErrorCode:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_validateServerBookmarksWithTarget:(id)a0 completionHandler:(id /* block */)a1;
- (id)_errorWithCode:(long long)a0 userInfo:(id)a1;
- (void)_validateServerBookmarksAfterInitialSyncWithTarget:(id)a0 completionHandler:(id /* block */)a1;
- (void)_validateServerBookmarksWithTarget:(id)a0 initialBookmarks:(id)a1 completionHandler:(id /* block */)a2;
- (void)_validateServerBookmarksAfterClearingLocallyWithTarget:(id)a0 initialBookmarks:(id)a1 completionHandler:(id /* block */)a2;
- (void)_performCloudKitSecondaryMigrationAfterClearingBookmarksWithTarget:(id)a0 initialBookmarks:(id)a1 completionHandler:(id /* block */)a2;
- (void)_performFinalServerBookmarkValidationAfterClearingAndSyncingWithInitialBookmarks:(id)a0 completionHandler:(id /* block */)a1;
- (void)runWithTarget:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleRequest:(id)a0 withTarget:(id)a1 completionHandler:(id /* block */)a2;

@end
