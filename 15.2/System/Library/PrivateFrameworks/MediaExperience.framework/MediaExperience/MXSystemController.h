@class NSString, NSMutableDictionary;

@interface MXSystemController : NSObject {
    BOOL mAppWantsVolumeChanges;
    BOOL mCanBeNowPlayingApp;
    int mClientPID;
    int mPIDToInheritAppStateFrom;
    NSString *mDisplayID;
    NSMutableDictionary *mNotificationsSubscribedTo;
    BOOL mHasEntitlementForPIDInheritance;
    NSString *mRemoteDeviceID;
}

@property (readonly, nonatomic) BOOL phoneCallExists;
@property (readonly, nonatomic) BOOL isSomeoneRecording;
@property (readonly, nonatomic) BOOL someLongFormVideoClientIsPlaying;
@property (readonly, nonatomic) BOOL someLongFormVideoClientIsActiveOverAirPlayVideo;
@property (readonly, nonatomic) BOOL someLongFormVideoClientIsPlayingOverAirPlayVideo;
@property (readonly, nonatomic) BOOL someSharePlayCapableCallSessionIsActive;

+ (void)updateMXSystemControllerList;
+ (void)notifyAll:(id)a0 payload:(id)a1 dontPostIfSuspended:(BOOL)a2;
+ (int)getPIDToInheritAppStateFromForPID:(int)a0;
+ (void)notifyAll:(id)a0 payload:(id)a1 dontPostIfSuspended:(BOOL)a2 remoteDeviceID:(id)a3;
+ (int)getPIDForAnyAppThatWantsVolumeChanges;
+ (void)dumpInfoOfMXSystemControllers;
+ (BOOL)getCanBeNowPlayingAppForPID:(int)a0;

- (void)applyCanBeNowPlayingApp:(const void *)a0;
- (int)copyAttributeForKey:(id)a0 withValueOut:(void *)a1;
- (int)applyPIDToInheritAppStateFrom:(const void *)a0;
- (id)info;
- (id)initWithPID:(int)a0;
- (id)initWithPID:(int)a0 remoteDeviceID:(id)a1;
- (void)dealloc;
- (id)getDisplayID;
- (int)setAttributeForKey:(id)a0 andValue:(const void *)a1;

@end
