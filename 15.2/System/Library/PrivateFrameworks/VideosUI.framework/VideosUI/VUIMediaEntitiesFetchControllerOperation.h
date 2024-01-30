@class NSArray, VUIMediaLibrary, VUIMediaEntitiesFetchControllerResult, NSError, NSOperation;

@interface VUIMediaEntitiesFetchControllerOperation : VUIAsynchronousOperation

@property (retain, nonatomic) VUIMediaEntitiesFetchControllerResult *result;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) long long fetchReason;
@property (copy, nonatomic) NSArray *requests;
@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary;
@property (retain, nonatomic) NSOperation *currentSubOperation;
@property (copy, nonatomic) NSArray *currentFetchResponses;

- (void)executionDidBegin;
- (void).cxx_destruct;
- (void)cancel;
- (void)_startMediaLibraryFetchOperation;
- (void)_handleCompletdFetchWithResponses:(id)a0 error:(id)a1;
- (void)_startChangesOperationWithMediaEntityFetchResponses:(id)a0 currentFetchResponses:(id)a1;
- (id)_resultWithResponses:(id)a0;
- (id)initWithMediaLibrary:(id)a0 fetchReason:(long long)a1 requests:(id)a2;

@end
