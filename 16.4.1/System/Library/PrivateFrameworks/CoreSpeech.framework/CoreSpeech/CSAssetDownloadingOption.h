@interface CSAssetDownloadingOption : NSObject

@property (nonatomic) BOOL allowVoiceTriggerAssetDownloading;
@property (nonatomic) BOOL allowEndpointAssetDownloading;
@property (nonatomic) BOOL allowLanguageDetectorAssetDownloading;
@property (nonatomic) BOOL allowAdBlockerAssetDownloading;
@property (nonatomic) BOOL allowSpeakerRecognitionAssetDownloading;
@property (nonatomic) BOOL allowVoiceTriggerAccessoryAssetDownloading;

- (id)init;
- (id)description;

@end
