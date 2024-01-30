@class NPSDomainAccessor;

@interface NTKTritiumDefaults : NSObject {
    NPSDomainAccessor *_domainAccessor;
}

+ (id)sharedInstance;

- (void)reload;
- (void)_synchronize;
- (void).cxx_destruct;
- (id)init;
- (id)_domainAccessor;
- (void)setAllBundleIDsPrivateInTritium:(BOOL)a0;
- (BOOL)allBundleIDsPrivateInTritium;
- (id)_privateBundleIDs;
- (id)_privateSiriCardIDs;
- (BOOL)isBundleIdPrivateInTritium:(id)a0;
- (BOOL)isSiriPlatterPrivateInTritium:(id)a0;
- (void)setBundleIDs:(id)a0 privateInTritium:(BOOL)a1;
- (void)setSiriPlatters:(id)a0 privateInTritium:(BOOL)a1;

@end
