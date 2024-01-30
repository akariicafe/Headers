@class NSString, NSData;

@interface SFCertificate_Ivars : NSObject {
    long long certificateType;
    NSString *subject;
    NSString *issuerName;
    NSData *serialNumber;
    struct __SecCertificate { } *secCertificate;
}

- (void).cxx_destruct;

@end
