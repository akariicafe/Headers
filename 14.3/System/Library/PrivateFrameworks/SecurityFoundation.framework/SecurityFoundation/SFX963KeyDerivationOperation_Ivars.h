@protocol SFDigestOperation, SFKeyDerivingOperation;

@interface SFX963KeyDerivationOperation_Ivars : NSObject {
    id<SFKeyDerivingOperation> sharedSecretOperation;
    id<SFDigestOperation> digestOperation;
}

- (void).cxx_destruct;

@end
