@class NSString;

@interface MTStandardKeyRequestHandler : IMBaseStoreService <MTSecureKeyRequestHandler> {
    void /* unknown type, empty encoding */ requestQueue;
}

@property (class, nonatomic, readonly) NSString *keyRequestLicenseErrorDomain;

- (void).cxx_destruct;
- (id)init;
- (id)initWithConcurrentOperationCount:(long long)a0 requestEncodingType:(unsigned long long)a1;
- (void)loadKeyDataFor:(id)a0 account:(id)a1 completion:(id /* block */)a2;
- (void)loadCertificateDataWithCompletion:(id /* block */)a0;

@end
