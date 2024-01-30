@class NSString;

@interface SecConcrete_sec_certificate : NSObject <OS_sec_certificate> {
    struct __SecCertificate { } *certificate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCertificate:(struct __SecCertificate { } *)a0;
- (void)dealloc;

@end
