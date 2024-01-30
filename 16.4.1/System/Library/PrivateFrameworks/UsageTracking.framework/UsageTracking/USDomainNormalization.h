@interface USDomainNormalization : NSObject {
    struct UIDNA { } *_idna;
}

- (void)dealloc;
- (id)normalizeDomainName:(id)a0;
- (id)normalizeDomainNames:(id)a0;
- (id)normalizeURL:(id)a0;

@end
