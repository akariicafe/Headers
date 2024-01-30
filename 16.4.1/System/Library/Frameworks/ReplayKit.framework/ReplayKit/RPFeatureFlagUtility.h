@interface RPFeatureFlagUtility : NSObject {
    BOOL _stereoAudioControlCenter;
    BOOL _systemBannerEnabled;
    BOOL _screenRecordingCameraPip;
}

@property (readonly, nonatomic) BOOL stereoAudioControlCenter;
@property (readonly, nonatomic) BOOL screenRecordingCameraPip;
@property (readonly, nonatomic) BOOL systemBannerEnabled;
@property (readonly, nonatomic) BOOL alwaysOnDisplayEnabled;

+ (id)sharedInstance;

- (id)init;

@end
