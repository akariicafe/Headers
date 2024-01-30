@class NSArray, NSString;

@interface PKAccountVirtualCardEncryptionFields : NSObject {
    NSArray *_certificates;
    NSString *_encryptionVersion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)prepareOneTimeCertificateWithQueue:(id)a0 completion:(id /* block */)a1;
- (void)prepareCertificateWithQueue:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)dictionaryRepresentation;

@end
