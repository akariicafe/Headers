@class NSURLSession, NSString, PARSession, NSURL, DESServiceConnection, NSObject, DESRecordSet;
@protocol OS_dispatch_queue, DESRecipeEvaluation;

@interface DESEvaluationSession : NSObject <PARSessionDelegate, NSURLSessionDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    DESServiceConnection *_serviceConnection;
    DESRecordSet *_recordSet;
    NSString *_recipeType;
    NSString *_localeIdentifier;
    NSString *_deviceIdentifier;
    NSURL *_baseURL;
    NSURL *_postbackBaseURL;
    PARSession *_parSession;
    id<DESRecipeEvaluation> _evaluator;
    unsigned long long _recipeCountLimit;
    double _timeLimit;
    BOOL _enableOriginReturnRoute;
    BOOL _enableParsecReturnRoute;
}

@property (readonly, nonatomic) NSURLSession *session;
@property (readonly, nonatomic) BOOL isPFLPlugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)downloadedRecipeWithID:(id)a0 recipeType:(id)a1 baseURL:(id)a2 protocolClass:(Class)a3 error:(id *)a4;
+ (void)downloadAttachments:(id)a0 signatures:(id)a1 certificate:(id)a2 session:(id)a3 queue:(id)a4 completion:(id /* block */)a5;
+ (BOOL)verifyAttachment:(id)a0 attachmentURL:(id)a1 attachmentSignature:(id)a2;

- (void).cxx_destruct;
- (BOOL)taskIsDeferred;
- (void)session:(id)a0 didDownloadResource:(id)a1;
- (void)session:(id)a0 didDeleteResource:(id)a1;
- (void)session:(id)a0 bag:(id)a1 didLoadWithError:(id)a2;
- (void)invalidate;
- (void)runWithCompletion:(id /* block */)a0;
- (id)initWithServiceConnection:(id)a0 baseURL:(id)a1 recordSet:(id)a2 recipeType:(id)a3 localeIdentifier:(id)a4 evaluatorOverride:(id)a5 protocolClass:(Class)a6;
- (void)sendRecipeResponseWithJSONResult:(id)a0 binaryResult:(id)a1 recipe:(id)a2 duration:(double)a3 error:(id)a4 completion:(id /* block */)a5;
- (id)initWithServiceConnection:(id)a0 baseURL:(id)a1 recordSet:(id)a2 recipeType:(id)a3 localeIdentifier:(id)a4 deviceIdentifier:(id)a5 evaluatorOverride:(id)a6 protocolClass:(Class)a7;
- (id)telemetryResponse;
- (id)initWithServiceConnection:(id)a0 baseURL:(id)a1 recordSet:(id)a2 recipeType:(id)a3 localeIdentifier:(id)a4 evaluatorOverride:(id)a5;
- (void)postRecipeResponse:(id)a0 recipeId:(id)a1 completion:(id /* block */)a2;
- (void)_runJSONPOSTRequest:(id)a0 path:(id)a1 completion:(id /* block */)a2;
- (void)_runPOSTRequestWithHTTPBody:(id)a0 contentType:(id)a1 URL:(id)a2 completion:(id /* block */)a3;
- (void)_runJSONPOSTRequest:(id)a0 URL:(id)a1 completion:(id /* block */)a2;
- (void)_handleTelemetry:(id)a0 completion:(id /* block */)a1;
- (void)_runJSONGETRequestWithPath:(id)a0 completion:(id /* block */)a1;
- (BOOL)_ensureEvaluatorWithError:(id *)a0;
- (void)_attemptRecipeMatchWithRecipes:(id)a0 keepGoing:(id /* block */)a1 completion:(id /* block */)a2;
- (void)_fetchRecipe:(id)a0 matchingRecordSet:(id)a1 completion:(id /* block */)a2;
- (void)_sendRecipeResponseWithJSONResult:(id)a0 binaryResult:(id)a1 recipe:(id)a2 duration:(double)a3 error:(id)a4 completion:(id /* block */)a5;
- (void)_handleRecipeResponse:(id)a0 recipeId:(id)a1 matchingRecordSet:(id)a2 completion:(id /* block */)a3;
- (void)_downloadAttachments:(id)a0 signatures:(id)a1 certificate:(id)a2 completion:(id /* block */)a3;
- (BOOL)maybePostRecipeResponseToParsec:(id)a0 recipeId:(id)a1;
- (BOOL)_originReturnRouteEnabled;
- (void)_runJSONOrMultipartPOSTRequest:(id)a0 path:(id)a1 completion:(id /* block */)a2;
- (void)_fetchPolicyWithCompletion:(id /* block */)a0;
- (id)_requestObjectWithJSONResult:(id)a0 binaryResult:(id)a1 recipe:(id)a2 duration:(double)a3 error:(id)a4;
- (BOOL)_parsecReturnRouteEnabled;

@end
