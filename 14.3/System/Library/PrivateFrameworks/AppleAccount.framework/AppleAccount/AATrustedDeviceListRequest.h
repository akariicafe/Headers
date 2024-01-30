@class NSString, AAGrandSlamSigner;

@interface AATrustedDeviceListRequest : AARequest {
    AAGrandSlamSigner *_grandSlamSigner;
}

@property (copy, nonatomic) NSString *heartbeatToken;

+ (Class)responseClass;

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithURLString:(id)a0 accountStore:(id)a1 grandSlamAccount:(id)a2;

@end
