@class AMSMediaTokenService, ICClientInfo;

@interface ICDeveloperTokenFetchRequest : ICRemoteRequestOperation <NSSecureCoding> {
    ICClientInfo *_clientInfo;
    unsigned long long _options;
    AMSMediaTokenService *_mediaTokenService;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long clientType;

+ (void)invalidateCachedDeveloperTokenForClientInfo:(id)a0 clientType:(long long)a1 requester:(id)a2 completionHandler:(id /* block */)a3;
+ (void)_invalidateCachedDeveloperTokenForClientInfo:(id)a0 requester:(id)a1 usingMediaTokenService:(id)a2;
+ (id)_createMediaTokenServiceForClientInfo:(id)a0 clientType:(long long)a1 requester:(id)a2;

- (void)execute;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_didFetchMediaToken:(id)a0 withError:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (id)initWithClientInfo:(id)a0;
- (id)initWithClientInfo:(id)a0 options:(unsigned long long)a1;

@end
