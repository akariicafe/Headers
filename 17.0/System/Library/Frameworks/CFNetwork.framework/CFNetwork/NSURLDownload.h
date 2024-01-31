@class NSURLDownloadInternal, NSString, NSData, NSURLRequest;

@interface NSURLDownload : NSObject <NSURLAuthenticationChallengeSender> {
    NSURLDownloadInternal *_internal;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSURLRequest *request;
@property (readonly, copy) NSData *resumeData;
@property BOOL deletesFileUponFailure;

+ (id)_downloadWithLoadingConnection:(id)a0 request:(id)a1 response:(id)a2 delegate:(id)a3 proxy:(id)a4;
+ (id)_downloadWithLoadingCFURLConnection:(struct _CFURLConnection { } *)a0 request:(struct _CFURLRequest { } *)a1 response:(struct _CFURLResponse { } *)a2 delegate:(id)a3 proxy:(id)a4;
+ (id)_downloadWithRequest:(id)a0 delegate:(id)a1 directory:(id)a2;
+ (BOOL)canResumeDownloadDecodedWithEncodingMIMEType:(id)a0;

- (void)_setDelegate:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_setDelegateQueue:(id)a0;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)a0;
- (void)useCredential:(id)a0 forAuthenticationChallenge:(id)a1;
- (void)cancel;
- (void)cancelAuthenticationChallenge:(id)a0;
- (id)initWithRequest:(id)a0 delegate:(id)a1;
- (id)url;
- (id)_directoryPath;
- (id)_initWithLoadingCFURLConnection:(struct _CFURLConnection { } *)a0 request:(struct _CFURLRequest { } *)a1 response:(struct _CFURLResponse { } *)a2 delegate:(id)a3 proxy:(id)a4;
- (id)_initWithLoadingConnection:(id)a0 request:(id)a1 response:(id)a2 delegate:(id)a3 proxy:(id)a4;
- (id)_initWithRequest:(id)a0 delegate:(id)a1 directory:(id)a2;
- (id)_initWithResumeInformation:(id)a0 delegate:(id)a1 path:(id)a2;
- (id)_resumeInformation;
- (void)_setDirectoryPath:(id)a0;
- (id)initWithResumeData:(id)a0 delegate:(id)a1 path:(id)a2;
- (void)setDestination:(id)a0 allowOverwrite:(BOOL)a1;
- (void)withDelegate:(id /* block */)a0;

@end
