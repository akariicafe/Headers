@class NSURLRequest;
@protocol BLDownloadQueueUIManagerProtocol;

@interface BLDownloadManifestRequest : BLRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURLRequest *URLRequest;
@property (retain, nonatomic) id<BLDownloadQueueUIManagerProtocol> uiManager;

- (void)startWithManifestResponseBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithURLRequest:(id)a0 uiManager:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
