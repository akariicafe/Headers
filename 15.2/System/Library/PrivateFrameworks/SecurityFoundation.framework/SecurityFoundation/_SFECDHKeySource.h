@class _SFECKeyPair, _SFECPublicKey;

@interface _SFECDHKeySource : NSObject {
    id _ecdhKeySourceInternal;
}

@property (retain, nonatomic) _SFECKeyPair *localKeyPair;
@property (retain, nonatomic) _SFECPublicKey *remotePublicKey;

- (void).cxx_destruct;
- (id)initWithLocalKeyPair:(id)a0 remotePublickKey:(id)a1;

@end
