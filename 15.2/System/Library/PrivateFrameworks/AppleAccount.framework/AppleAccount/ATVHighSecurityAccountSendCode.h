@class NSDictionary;

@interface ATVHighSecurityAccountSendCode : AAAppleTVRequest {
    NSDictionary *_device;
}

+ (Class)responseClass;

- (id)urlString;
- (id)initWithAccount:(id)a0 device:(id)a1;
- (void).cxx_destruct;
- (id)urlRequest;

@end
