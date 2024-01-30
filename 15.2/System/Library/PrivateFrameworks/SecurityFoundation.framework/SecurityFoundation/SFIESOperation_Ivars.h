@class SFSymmetricEncryptionOperation, _SFECDHOperation;
@protocol SFDigestOperation;

@interface SFIESOperation_Ivars : NSObject {
    long long curve;
    _SFECDHOperation *diffieHellmanOperation;
    SFSymmetricEncryptionOperation *encryptionOperation;
    id<SFDigestOperation> digestOperation;
}

- (void).cxx_destruct;

@end
