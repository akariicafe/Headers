@class NSURLRequest, NSString;
@protocol SSDownloadManifestRequestDelegate;

@interface SSDownloadManifestRequest : SSRequest <SSXPCCoding> {
    long long _manifestFormat;
    BOOL _shouldHideUserPrompts;
    NSURLRequest *_urlRequest;
}

@property long long manifestFormat;
@property (nonatomic) id<SSDownloadManifestRequestDelegate> delegate;
@property (readonly) NSURLRequest *URLRequest;
@property BOOL shouldHideUserPrompts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURLRequest:(id)a0;
- (BOOL)start;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (id)init;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (void)startWithManifestResponseBlock:(id /* block */)a0;
- (void)dealloc;

@end
