@class TTSAssetType, TTSAssetQuality, NSString, TTSAssetTechnology, NSArray, NSDictionary, NSBundle, NSNumber, TTSAssetSource;

@interface SiriTTSService.TTSAssetStaticVoice : TTSAsset {
    void /* unknown type, empty encoding */ asset;
    void /* unknown type, empty encoding */ attr;
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
@property (nonatomic, readonly) long long gender;
@property (nonatomic, readonly) NSNumber *age;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSNumber *diskSize;
@property (nonatomic, readonly) NSBundle *bundle;

- (id)init;
- (void).cxx_destruct;

@end
