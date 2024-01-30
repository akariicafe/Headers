@class TTSAssetType, TTSAssetQuality, NSString, TTSAssetTechnology, NSArray, NSDictionary, NSBundle, TTSAssetSource, NSNumber;

@interface SiriTTSService.TTSAssetStaticResource : TTSAsset {
    void /* unknown type, empty encoding */ asset;
    void /* unknown type, empty encoding */ assetAttr;
}

@property (nonatomic, readonly) TTSAssetType *assetType;
@property (nonatomic, readonly) TTSAssetSource *assetSource;
@property (nonatomic, readonly) TTSAssetTechnology *technology;
@property (nonatomic, readonly) TTSAssetQuality *quality;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long versionNumber;
@property (nonatomic, readonly) NSString *versionDescription;
@property (nonatomic, readonly) NSArray *supportedLanguages;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSNumber *diskSize;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) BOOL purgeable;

- (id)init;
- (void).cxx_destruct;

@end
