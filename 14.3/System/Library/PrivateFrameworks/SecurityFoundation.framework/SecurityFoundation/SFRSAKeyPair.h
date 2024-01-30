@interface SFRSAKeyPair : _SFKeyPair {
    id _rsaKeyPairInternal;
}

- (void).cxx_destruct;
- (id)initRandomKeyPairWithSpecifier:(id)a0 privateKeyDomain:(id)a1;
- (id)initRandomKeyPairWithSpecifier:(id)a0;

@end
