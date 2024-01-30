@class SFSymmetricEncryptionOperation;

@interface SFCMACOperation : SFMessageAuthenticationCodeOperation {
    id _cmacOperationInternal;
}

@property (copy, nonatomic) SFSymmetricEncryptionOperation *encryptionOperation;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithEncryptionOperation:(id)a0;

@end
