@class NSString, NSDictionary;

@interface MXSystemController : NSObject

@property (retain) NSString *displayID;
@property (retain) NSDictionary *notificationsSubscribedTo;
@property (retain) NSString *remoteDeviceID;
@property (nonatomic) BOOL appWantsVolumeChanges;
@property (nonatomic) BOOL canBeNowPlayingApp;
@property (nonatomic) int clientPID;
@property (nonatomic) BOOL hasEntitlementForPIDInheritance;
@property (nonatomic) BOOL hasEntitlementToEnableWombat;
@property (nonatomic) int pidToInheritAppStateFrom;
@property (readonly, nonatomic) BOOL phoneCallExists;
@property (readonly, nonatomic) BOOL isSomeoneRecording;
@property (readonly, nonatomic) BOOL someLongFormVideoClientIsPlaying;
@property (readonly, nonatomic) BOOL someLongFormVideoClientIsActiveOverAirPlayVideo;
@property (readonly, nonatomic) BOOL someLongFormVideoClientIsPlayingOverAirPlayVideo;
@property (readonly, nonatomic) BOOL someSharePlayCapableCallSessionIsActive;

+ (BOOL)isNonSerializedCopyProperty:(id)a0;
+ (void)dumpInfoOfMXSystemControllers;
+ (void)notifyAll:(id)a0 payload:(id)a1 dontPostIfSuspended:(BOOL)a2;
+ (void)updateMXSystemControllerList;
+ (int)getPIDForAnyAppThatWantsVolumeChanges;
+ (BOOL)getCanBeNowPlayingAppForPID:(int)a0;
+ (void)notifyAll:(id)a0 payload:(id)a1 dontPostIfSuspended:(BOOL)a2 remoteDeviceID:(id)a3;
+ (int)getPIDToInheritAppStateFromForPID:(int)a0;
+ (BOOL)isNonSerializedSetProperty:(id)a0;

- (void)volumeCategoryAndMode:(id)a0 mode:(id)a1 outCategoryCopy:(id *)a2 outModeCopy:(id *)a3;
- (void)applyCanBeNowPlayingApp:(const void *)a0;
- (int)setAttributeForKey:(id)a0 andValue:(const void *)a1;
- (int)copyAttributeForKeyInternal:(id)a0 withValueOut:(void *)a1;
- (int)setAttributeForKeyInternal:(id)a0 andValue:(const void *)a1;
- (int)performVolumeOperation:(unsigned int)a0 volume:(float)a1 category:(id)a2 mode:(id)a3 routeName:(id)a4 routeDeviceIdentifier:(id)a5 routeSubtype:(id)a6 outVolume:(float *)a7 outSequenceNumber:(long long *)a8 outMuted:(BOOL *)a9 outCategoryCopy:(id *)a10 outModeCopy:(id *)a11;
- (id)info;
- (id)initWithPID:(int)a0 remoteDeviceID:(id)a1;
- (int)copyAttributeForKey:(id)a0 withValueOut:(void *)a1;
- (void)dealloc;
- (int)applyPIDToInheritAppStateFrom:(const void *)a0;
- (id)initWithPID:(int)a0;
- (int)_performVolumeOperation:(unsigned int)a0 volume:(float)a1 category:(id)a2 mode:(id)a3 routeName:(id)a4 routeDeviceIdentifier:(id)a5 routeSubtype:(id)a6 outVolume:(float *)a7 outSequenceNumber:(long long *)a8 outMuted:(BOOL *)a9 outCategoryCopy:(id *)a10 outModeCopy:(id *)a11;

@end
