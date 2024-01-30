@class _SFECKeySpecifier;
@protocol SFDigestOperationInternal;

@interface SFEC_X962SigningOperation_Ivars : NSObject {
    _SFECKeySpecifier *keySpecifier;
    id<SFDigestOperationInternal> digestOperation;
}

- (void).cxx_destruct;

@end
