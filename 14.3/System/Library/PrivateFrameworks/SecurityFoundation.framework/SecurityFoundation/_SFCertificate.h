@class NSString, NSData;

@interface _SFCertificate : NSObject {
    id _certificateInternal;
}

@property (readonly, nonatomic) struct __SecCertificate { } *secCertificate;
@property (readonly, nonatomic) long long certificateType;
@property (readonly, nonatomic) NSString *subject;
@property (readonly, nonatomic) NSString *issuerName;
@property (readonly, nonatomic) NSData *serialNumber;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithSecCertificate:(struct __SecCertificate { } *)a0;

@end
