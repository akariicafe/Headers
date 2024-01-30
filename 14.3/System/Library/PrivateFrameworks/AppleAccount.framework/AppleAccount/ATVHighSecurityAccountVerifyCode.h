@class NSString;

@interface ATVHighSecurityAccountVerifyCode : ATVHighSecurityAccountSendCode {
    NSString *_hsaCode;
}

+ (Class)responseClass;

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 device:(id)a1 hsaCode:(id)a2;

@end
