@class NSArray, SHCustomCatalogContainer;
@protocol SHCustomCatalogDelegate;

@interface SHCustomCatalog : SHCatalog {
    double _minimumQuerySignatureDuration;
}

@property (retain, nonatomic) NSArray *_referenceAudioMediaItems;
@property (readonly, nonatomic) double _windowSeconds;
@property (weak, nonatomic) id<SHCustomCatalogDelegate> _customCatalogDelegate;
@property (readonly, nonatomic) SHCustomCatalogContainer *customCatalogContainer;
@property (readonly, nonatomic) long long density;
@property (readonly, nonatomic) NSArray *mediaItems;

+ (id)new;

- (void)enumerateWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (id)_initWithInstallationID:(id)a0;
- (double)minimumQuerySignatureDuration;
- (id)_createMatcher;
- (id)initWithWindowSeconds:(double)a0 minimumSignatureDuration:(double)a1 density:(long long)a2;
- (id)initWithDensity:(long long)a0;
- (void)flowReferenceAudio:(id)a0 atTime:(id)a1 representingMediaItems:(id)a2;
- (BOOL)addCustomCatalogFromURL:(id)a0 error:(id *)a1;
- (BOOL)_addReferenceSignature:(id)a0 forReferenceMediaItemsWithError:(id *)a1;
- (BOOL)addReferenceSignature:(id)a0 representingMediaItems:(id)a1 error:(id *)a2;

@end
