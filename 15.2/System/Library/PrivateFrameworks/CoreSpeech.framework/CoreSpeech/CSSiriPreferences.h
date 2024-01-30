@class AFInstanceContext, NSObject;
@protocol OS_dispatch_queue;

@interface CSSiriPreferences : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    AFInstanceContext *_instanceContext;
}

+ (id)sharedPreferences;

- (id)initWithInstanceContext:(id)a0;
- (unsigned long long)internalUserClassification;
- (void).cxx_destruct;
- (id)init;
- (id)overrideAudioSessionActiveDelay;
- (id)serverMediaPlaybackVolumeThresholdForAudioSessionActivationDelay;
- (id)serverAudioSessionActivationDelayAboveMediaPlaybackVolumeThreshold;
- (id)serverAudioSessionActivationDelay;

@end
