@interface TRINotificationProcessingPolicy : TRIPBMessage

@property (nonatomic) unsigned int delaySeconds;
@property (nonatomic) BOOL hasDelaySeconds;
@property (nonatomic) int assetDownloadPolicy;
@property (nonatomic) BOOL hasAssetDownloadPolicy;

+ (id)descriptor;

@end
