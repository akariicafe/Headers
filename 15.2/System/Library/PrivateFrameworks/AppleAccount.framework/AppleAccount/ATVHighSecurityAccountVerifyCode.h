@class NSString;

@interface ATVHighSecurityAccountVerifyCode : ATVHighSecurityAccountSendCode {
    NSString *_hsaCode;
}

+ (Class)responseClass;

- (id)urlString;
- (id)initWithAccount:(id)a0 device:(id)a1 hsaCode:(id)a2;
- (void).cxx_destruct;
- (id)urlRequest;

@end
