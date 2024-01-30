@interface AFFeatureFlags : NSObject

+ (void)dump;
+ (id)sharedInstance;
+ (id)featureFlags;
+ (BOOL)isAnnounceEnabled;
+ (BOOL)isHALEnabled;
+ (BOOL)isSeymourEnabled;
+ (BOOL)isLocationSearchContinuityEnabled;
+ (void)setLocationSearchContinuityEnabled:(BOOL)a0;
+ (BOOL)isMessagesOnSiriKitNative;
+ (BOOL)isHintsEnabled;
+ (BOOL)isAudioSessionCoordinationEnabled;

@end
