@class NSDictionary;

@interface ATVHighSecurityAccountSendCode : AAAppleTVRequest {
    NSDictionary *_device;
}

+ (Class)responseClass;

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 device:(id)a1;

@end
