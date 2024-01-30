@class VSOptional, NSSet, SSLookupRequest, NSOperationQueue, VSAuditToken;

@interface VSAppDescriptionFetchOperation : VSAsyncOperation

@property (copy, nonatomic) NSSet *appAdamIDs;
@property (nonatomic) struct CGSize { double width; double height; } preferredArtworkSize;
@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) SSLookupRequest *lookupRequest;
@property (retain, nonatomic) NSOperationQueue *imageLoadingQueue;
@property (nonatomic) BOOL needsProductProfile;
@property (nonatomic) BOOL shouldPersonalizeResponse;
@property (nonatomic) BOOL shouldPrecomposeIcon;
@property (retain, nonatomic) VSAuditToken *auditToken;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)initWithAppAdamIDs:(id)a0;
- (id)initWithAppAdamIDs:(id)a0 preferredArtworkSize:(struct CGSize { double x0; double x1; })a1;
- (id)_appDescriptionFromLookupResponse:(id)a0 appAdamID:(id)a1;
- (void)_handleLookupResponse:(id)a0;

@end
