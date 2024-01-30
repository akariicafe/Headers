@class NSURLSession, NSString, PARSession, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface DESDodMLServer : NSObject <PARSessionDelegate, NSURLSessionDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_localeIdentifier;
    NSString *_deviceIdentifier;
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

+ (void)initialize;

- (void)uploadViaLegacyRouteWithResult:(id)a0 recipe:(id)a1 uploadTransport:(id)a2 error:(id)a3 completion:(id /* block */)a4;
- (void)session:(id)a0 bag:(id)a1 didLoadWithError:(id)a2;
- (id)_removeLocalOnlyKeys:(id)a0;
- (void)invalidateInternal;
- (void)sendRecipeResponseWithResult:(id)a0 recipe:(id)a1 uploadTransport:(id)a2 error:(id)a3 completion:(id /* block */)a4;
- (id)decodePolicyFromPayload:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (void)_runPOSTRequestWithHTTPBody:(id)a0 contentType:(id)a1 URL:(id)a2 completion:(id /* block */)a3;
- (id)systemMetaData;
- (BOOL)uploadViaDediscoWithResult:(id)a0 recipe:(id)a1 inError:(id)a2 outErrorPtr:(id *)a3;
- (void)postRecipeResponse:(id)a0 recipeID:(id)a1 bundleIdentifier:(id)a2 uploadTransport:(id)a3 completion:(id /* block */)a4;
- (id)_requestObjectWithResult:(id)a0 recipe:(id)a1 error:(id)a2;
- (BOOL)validatePolicySignature:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (BOOL)submitLogWithJSONResult:(id)a0 requestObject:(id)a1 recipe:(id)a2 error:(id *)a3;
- (BOOL)maybePostRecipeResponseToParsec:(id)a0 recipeID:(id)a1 uploadTransport:(id)a2;
- (void)runJSONPOSTRequest:(id)a0 URL:(id)a1 completion:(id /* block */)a2;
- (void)_runJSONGETRequestWithPath:(id)a0 completion:(id /* block */)a1;
- (BOOL)uploadViaDediscoWithResult:(id)a0 recipe:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithBaseURL:(id)a0 localeIdentifier:(id)a1 protocolClass:(Class)a2 sessionConfiguration:(id)a3;
- (void)fetchRecipe:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)session:(id)a0 didDownloadResource:(id)a1;
- (void)invalidate;
- (void)_runJSONPOSTRequest:(id)a0 path:(id)a1 uploadTransport:(id)a2 completion:(id /* block */)a3;
- (void)downloadAttachments:(id)a0 signatures:(id)a1 certificate:(id)a2 completion:(id /* block */)a3;
- (id)downloadedRecipeWithID:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (void)_runJSONOrMultipartPOSTRequest:(id)a0 path:(id)a1 uploadTransport:(id)a2 completion:(id /* block */)a3;
- (BOOL)verifyAttachment:(id)a0 attachmentURL:(id)a1 attachmentSignature:(id)a2;
- (void)session:(id)a0 didDeleteResource:(id)a1;
- (id)initWithBaseURL:(id)a0 localeIdentifier:(id)a1 protocolClass:(Class)a2;
- (void)fetchPolicyForBundleIdentifier:(id)a0 completion:(id /* block */)a1;

@end
