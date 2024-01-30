@class TTSAssetType, TTSAssetTechnology, NSString, NSDictionary, NSNumber, TTSAssetQuality;

@interface SiriTTSService.TTSAssetTrialVoiceAsset : SiriTTSService.TTSAssetTrialAsset

@property (nonatomic, readonly) TTSAssetType *assetType;
@property (nonatomic, readonly) TTSAssetTechnology *technology;
@property (nonatomic, readonly) TTSAssetQuality *quality;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long gender;
@property (nonatomic, readonly) NSNumber *age;
@property (nonatomic, readonly) NSDictionary *attributes;

@end
