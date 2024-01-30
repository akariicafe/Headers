@interface ANAnnounceFeatureStatus : NSObject

@property (class, readonly, nonatomic) BOOL isEnabledForPersonalDevices;
@property (class, readonly, nonatomic) BOOL shouldStopPlaybackOnSiriActivation;

+ (BOOL)isEnabled;

@end
