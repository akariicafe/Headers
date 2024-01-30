@class NSString, NSDictionary, PHPhotoLibrary;

@interface VCPMADServiceImageProcessingTaskBatch : VCPMABaseTask {
    NSDictionary *_requests;
    PHPhotoLibrary *_photolibrary;
    NSString *_clientBundleID;
    NSString *_clientTeamID;
}

@property (retain, nonatomic) NSString *signpostPayload;

+ (id)taskWithCloudIdentifierRequests:(id)a0 photoLibrary:(id)a1 clientBundleID:(id)a2 clientTeamID:(id)a3 cancelBlock:(id /* block */)a4 andCompletionHandler:(id /* block */)a5;

- (void).cxx_destruct;
- (BOOL)run:(id *)a0;
- (BOOL)cachesResources;
- (id)assetWithIdentifier:(id)a0 isCloudIdentifier:(BOOL)a1 error:(id *)a2;
- (id)initWithCloudIdentifierRequests:(id)a0 photoLibrary:(id)a1 clientBundleID:(id)a2 clientTeamID:(id)a3 cancelBlock:(id /* block */)a4 andCompletionHandler:(id /* block */)a5;

@end
