@class NSLock, NSString, NSDate, NSArray, NSSet, NSDictionary, NSObject, NSPointerArray;
@protocol OS_dispatch_semaphore;

@interface MXSessionManager : NSObject

@property (retain) NSString *currentAudioCategory;
@property (retain) NSString *currentAudioMode;
@property (retain) NSString *defaultMusicApp;
@property (retain) NSDictionary *detailedRoutesDescription;
@property (retain) NSString *appAllowedToFadeInTemporarily;
@property (retain) NSString *appAllowedToInitiatePlaybackTemporarily;
@property (retain) NSString *nowPlayingAppDisplayID;
@property (retain) NSDate *nowPlayingAppStopTime;
@property (readonly, nonatomic) NSSet *audioCategoriesWithInput;
@property (readonly, nonatomic) NSSet *audioModesWithShortVoicePromptStyle;
@property (nonatomic) BOOL carPlayIsConnected;
@property (retain, nonatomic) NSArray *longFormVideoApps;
@property (retain, nonatomic) NSPointerArray *mxCoreSessionList;
@property (nonatomic) unsigned int mxCoreSessionListActiveReaders;
@property (retain, nonatomic) NSLock *mxCoreSessionListReadLock;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *mxCoreSessionListWriteSemaphore;
@property (retain, nonatomic) NSLock *mxsmPropertyLock;
@property (retain, nonatomic) NSArray *recordingClientPIDs;
@property (nonatomic) BOOL starkMainAudioIsOwnedByiOSButBorrowedByCar;
@property (retain, nonatomic) NSString *systemMirroringRoutingContextUUID;
@property (nonatomic) BOOL uplinkMute;
@property (nonatomic) BOOL wombatEnabled;

+ (id)sharedInstance;
+ (id)copyDefaultMusicAppFromPlist;

- (void)nowPlayingAppShouldPlayOnCarPlayConnect:(BOOL)a0;
- (BOOL)isSessionWithAudioModeActive:(id)a0;
- (void)updateDetailedRouteDescription:(unsigned int)a0;
- (void)mxCoreSessionListEndIteration;
- (BOOL)isLongFormVideoApp:(id)a0;
- (BOOL)areSessionsWithAudioModesActive:(id)a0;
- (BOOL)isSessionWithAudioModeRecording:(id)a0;
- (void)dealloc;
- (void)makeStarkPortRoutableForPhoneCall:(BOOL)a0;
- (void)makeStarkPortRoutableForPlayingSession:(BOOL)a0;
- (void)mxCoreSessionListBeginIteration;
- (id)init;
- (BOOL)isSessionWithAudioCategoryActive:(id)a0;
- (BOOL)isSessionWithAudioModePlaying:(id)a0;
- (void)interruptPlayingSessionsNotOptedIntoWombat;
- (void)resetDefaultMusicApp;
- (void)appToInterruptCurrentNowPlayingSession:(id)a0;
- (id)copyDetailedRouteDescription:(unsigned int)a0;
- (void)volumePreferenceDidChangeCallback:(id)a0;

@end
