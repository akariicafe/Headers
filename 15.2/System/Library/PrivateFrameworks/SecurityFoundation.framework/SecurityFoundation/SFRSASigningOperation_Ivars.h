@class _SFRSAKeySpecifier;
@protocol SFDigestOperation;

@interface SFRSASigningOperation_Ivars : NSObject {
    _SFRSAKeySpecifier *keySpecifier;
    id<SFDigestOperation> digestOperation;
}

- (void).cxx_destruct;

@end
