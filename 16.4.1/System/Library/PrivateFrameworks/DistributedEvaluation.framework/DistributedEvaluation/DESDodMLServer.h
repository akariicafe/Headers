@class NSURLSession, NSString, PARSession, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface DESDodMLServer : NSObject <PARSessionDelegate, NSURLSessionDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_localeIdentifier;
    NSURL *_postbackBaseURL;
    PARSession *_parSession;
    NSURLSession *_session;
    double _timeLimit;
    unsigned long long _recipeCountLimit;
}

@property (readonly, copy, nonatomic) NSURL *baseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)session:(id)a0 bag:(id)a1 didLoadWithError:(id)a2;
- (void)invalidate;
- (void).cxx_destruct;
- (void)session:(id)a0 didDeleteResource:(id)a1;
- (void)session:(id)a0 didDownloadResource:(id)a1;
- (void)_runJSONOrMultipartPOSTRequest:(id)a0 path:(id)a1 uploadTransport:(id)a2 completion:(id /* block */)a3;
- (void)_downloadAttachments:(id)a0 signatures:(id)a1 certificate:(id)a2 relativePaths:(id)a3 completion:(id /* block */)a4;
- (id)_removeLocalOnlyKeys:(id)a0;
- (id)_requestObjectWithResult:(id)a0 recipe:(id)a1 error:(id)a2;
- (void)_runJSONGETRequestWithPath:(id)a0 completion:(id /* block */)a1;
- (void)_runJSONPOSTRequest:(id)a0 path:(id)a1 uploadTransport:(id)a2 completion:(id /* block */)a3;
- (void)_runPOSTRequestWithHTTPBody:(id)a0 contentType:(id)a1 URL:(id)a2 completion:(id /* block */)a3;
- (id)decodePolicyFromPayload:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (void)downloadAttachments:(id)a0 signatures:(id)a1 certificate:(id)a2 relativePaths:(id)a3 completion:(id /* block */)a4;
- (id)downloadedRecipeWithID:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (void)fetchPolicyForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)fetchRecipe:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)initWithBaseURL:(id)a0 localeIdentifier:(id)a1 protocolClass:(Class)a2;
- (id)initWithBaseURL:(id)a0 localeIdentifier:(id)a1 protocolClass:(Class)a2 sessionConfiguration:(id)a3;
- (void)invalidateInternal;
- (BOOL)maybePostRecipeResponseToParsec:(id)a0 recipeID:(id)a1 uploadTransport:(id)a2;
- (id)moveToURLFromBaseURL:(id)a0 relativePath:(id)a1 attachmentURL:(id)a2 suggestedFilename:(id)a3;
- (void)runJSONPOSTRequest:(id)a0 URL:(id)a1 completion:(id /* block */)a2;
- (void)sendRecipeResponseWithResult:(id)a0 recipe:(id)a1 uploadTransport:(id)a2 error:(id)a3 completion:(id /* block */)a4;
- (id)systemMetaData;
- (BOOL)uploadViaDediscoWithResult:(id)a0 recipe:(id)a1 error:(id *)a2;
- (BOOL)uploadViaDediscoWithResult:(id)a0 recipe:(id)a1 inError:(id)a2 outErrorPtr:(id *)a3;
- (BOOL)validatePolicySignature:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (id)verifyAndMoveAttachmentAtLocation:(id)a0 attachmentURL:(id)a1 response:(id)a2 destinationBaseURL:(id)a3 relativePath:(id)a4 key:(id)a5 signature:(id)a6 downloadError:(id)a7 error:(id *)a8;
- (BOOL)verifyAttachment:(id)a0 attachmentURL:(id)a1 attachmentSignature:(id)a2;

@end
