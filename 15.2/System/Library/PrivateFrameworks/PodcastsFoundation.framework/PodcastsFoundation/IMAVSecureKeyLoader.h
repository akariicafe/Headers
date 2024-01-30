@class AVContentKeySession, NSString, MTContentKeyRequest, AVURLAsset, ACAccount, NSData;
@protocol MTSecureKeyRequestStorage, IMAVSecureKeyLoaderDelegate, AMSURLProtocolDelegate, MTSecureKeyRequestHandler, NSURLSessionDelegate;

@interface IMAVSecureKeyLoader : NSObject <AVContentKeySessionDelegate>

@property (retain, nonatomic) AVContentKeySession *contentKeySession;
@property (retain, nonatomic) AVURLAsset *recipient;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSString *contentAdamId;
@property (copy, nonatomic) id /* block */ pendingCompletion;
@property (nonatomic) BOOL isRenewal;
@property (retain, nonatomic) id<MTSecureKeyRequestHandler> secureKeyRequestHandler;
@property (retain, nonatomic) id<NSURLSessionDelegate, AMSURLProtocolDelegate> urlProtocolDelegate;
@property (retain, nonatomic) id<MTSecureKeyRequestStorage> secureKeyRequestStorage;
@property (nonatomic) unsigned long long useCase;
@property (retain, nonatomic) MTContentKeyRequest *savedRequestToUseForStopping;
@property (retain, nonatomic) NSData *savedRequestDataToUseForStopping;
@property (weak, nonatomic) id<IMAVSecureKeyLoaderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contentKeySession:(id)a0 contentKeyRequest:(id)a1 didFailWithError:(id)a2;
- (void)contentKeySession:(id)a0 contentKeyRequestDidSucceed:(id)a1;
- (void)contentKeySession:(id)a0 didProvideRenewingContentKeyRequest:(id)a1;
- (void).cxx_destruct;
- (void)contentKeySession:(id)a0 didProvidePersistableContentKeyRequest:(id)a1;
- (void)contentKeySession:(id)a0 didProvideContentKeyRequest:(id)a1;
- (void)invalidateAndCancel;
- (void)processContentKeyRequestWithKeyIdentifier:(id)a0 contentAdamId:(id)a1 isRenewal:(BOOL)a2 completion:(id /* block */)a3;
- (id)initWithRecipient:(id)a0 useCase:(unsigned long long)a1 urlProtocolDelegate:(id)a2;
- (id)initWithRecipient:(id)a0 useCase:(unsigned long long)a1 account:(id)a2 urlProtocolDelegate:(id)a3;
- (void)startKeyLoadingProcessWithKeyIdentifier:(id)a0 contentAdamId:(id)a1 isRenewal:(BOOL)a2 completion:(id /* block */)a3;
- (void)timeoutKeyRequest;
- (BOOL)_isOfflineAsset;
- (void)cleanupAfterContentKeyRequestWithError:(id)a0;
- (void)finishContentKeyRequest:(id)a0 forOfflineRenewal:(BOOL)a1 withResponse:(id)a2;
- (void)cleanupAfterContentKeyRequestForOfflineRenewal:(BOOL)a0 withError:(id)a1;
- (void)finishContentKeyRequest:(id)a0 withResponse:(id)a1;
- (void)requestKeyResponseFromContentKeyRequest:(id)a0 requestType:(long long)a1 completion:(id /* block */)a2;
- (void)processContentKeyRequestWithKeyRequestData:(id)a0 isRenewal:(BOOL)a1 completion:(id /* block */)a2;
- (void)startKeyLoadingProcessWithKeyRequestData:(id)a0 isRenewal:(BOOL)a1 completion:(id /* block */)a2;
- (void)sendStopRequestForStreamingLicenseIfNecessary;
- (void)securelyInvalidateOfflineDataForRequests:(id)a0 completion:(id /* block */)a1;

@end
