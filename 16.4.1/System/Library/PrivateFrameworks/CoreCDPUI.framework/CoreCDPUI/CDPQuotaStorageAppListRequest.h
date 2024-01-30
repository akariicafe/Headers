@class NSString, ACAccount;

@interface CDPQuotaStorageAppListRequest : AARequest {
    NSString *_urlStringFormat;
}

@property (readonly, nonatomic) ACAccount *account;

- (id)initWithAccount:(id)a0;
- (id)urlRequest;
- (id)urlString;
- (void).cxx_destruct;
- (id)_acceptedLanguageString;
- (id)_urlStringFormatFromBag;
- (BOOL)isUrlAvailable;

@end
