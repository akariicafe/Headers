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
+ (BOOL)canResumeDownloadDecodedWithEncodingMIMEType:(id)a0;
+ (id)_downloadWithRequest:(id)a0 delegate:(id)a1 directory:(id)a2;

- (void)_setDelegate:(id)a0;
- (id)_initWithLoadingConnection:(id)a0 request:(id)a1 response:(id)a2 delegate:(id)a3 proxy:(id)a4;
- (id)_initWithLoadingCFURLConnection:(struct _CFURLConnection { } *)a0 request:(struct _CFURLRequest { } *)a1 response:(struct _CFURLResponse { } *)a2 delegate:(id)a3 proxy:(id)a4;
- (id)_initWithResumeInformation:(id)a0 delegate:(id)a1 path:(id)a2;
- (id)url;
- (id)_initWithRequest:(id)a0 delegate:(id)a1 directory:(id)a2;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)a0;
- (void)withDelegate:(id /* block */)a0;
- (id)_directoryPath;
- (id)initWithResumeData:(id)a0 delegate:(id)a1 path:(id)a2;
- (void)setDestination:(id)a0 allowOverwrite:(BOOL)a1;
- (id)_resumeInformation;
- (void)_setDirectoryPath:(id)a0;
- (void)useCredential:(id)a0 forAuthenticationChallenge:(id)a1;
- (id)init;
- (id)initWithRequest:(id)a0 delegate:(id)a1;
- (void)cancelAuthenticationChallenge:(id)a0;
- (void)dealloc;
- (void)cancel;
- (void)_setDelegateQueue:(id)a0;

@end
