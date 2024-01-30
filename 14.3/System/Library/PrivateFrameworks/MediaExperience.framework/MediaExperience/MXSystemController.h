@class NSString, NSMutableArray;

@interface MXSystemController : NSObject {
    BOOL mAppWantsVolumeChanges;
    BOOL mCanBeNowPlayingApp;
    int mClientPID;
    int mPIDToInheritAppStateFrom;
    NSString *mDisplayID;
    NSMutableArray *mNotificationsSubscribedTo;
    struct __SecTask { } *mSecTask;
}

@property (readonly) BOOL phoneCallExists;
@property (readonly) BOOL isSomeoneRecording;
@property (readonly) BOOL someLongFormVideoClientIsPlaying;
@property (readonly) BOOL someLongFormVideoClientIsActiveOverAirPlayVideo;
@property (readonly) BOOL someLongFormVideoClientIsPlayingOverAirPlayVideo;

+ (void)updateMXSystemControllerList;
+ (void)notifyAll:(id)a0 payload:(id)a1 dontPostIfSuspended:(BOOL)a2;
+ (int)getPIDForAnyAppThatWantsVolumeChanges;
+ (int)getPIDToInheritAppStateFromForPID:(int)a0;
+ (BOOL)getCanBeNowPlayingAppForPID:(int)a0;
+ (id)getNotificationSenderQueue;
+ (void)dumpInfoOfMXSystemControllers;

- (id)initWithPID:(int)a0;
- (int)setAttributeForKey:(id)a0 andValue:(const void *)a1;
- (void)dealloc;
- (id)info;
- (int)applyPIDToInheritAppStateFrom:(const void *)a0;
- (void)applyCanBeNowPlayingApp:(const void *)a0;
- (int)copyAttributeForKey:(id)a0 withValueOut:(void *)a1;
- (id)getDisplayID;

@end
