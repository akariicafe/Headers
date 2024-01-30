@class DCDocumentCameraViewServiceSessionRequest, ICDocCamImageCache;

@interface DCDocumentCameraViewServiceSession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) DCDocumentCameraViewServiceSessionRequest *sessionRequest;
@property (readonly, nonatomic) int viewServicePid;
@property (readonly, nonatomic) ICDocCamImageCache *docCamImageCache;

- (void)encodeWithCoder:(id)a0;
- (void)setup;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionRequest:(id)a0;

@end
