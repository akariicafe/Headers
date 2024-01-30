@class NSString, NSNumber, NSArray;

@interface MXCoreSessionBase : NSObject

@property (retain) NSString *audioCategory;
@property (retain) NSString *audioMode;
@property (retain) NSString *clientName;
@property (retain) NSNumber *clientPID;
@property (retain) NSString *displayID;
@property (retain) NSNumber *ID;
@property (retain) NSArray *originalReporterIDs;
@property (retain) NSArray *reporterIDs;
@property (retain) NSString *routingContextUUID;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) int coreSessionType;
@property (nonatomic) float interruptionFadeDuration;
@property (nonatomic) BOOL isTheAssistant;
@property (nonatomic) BOOL reporterStarted;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isRecording;
@property (nonatomic) unsigned long long mxSessionIDCounter;

- (id)info;
- (void)dealloc;
- (id)init;
- (BOOL)hasAudioCategory:(id)a0;
- (BOOL)hasAudioMode:(id)a0;
- (BOOL)isSidekick;
- (void)updateClientName:(id)a0;
- (void)updateDefaultInterruptionFadeDuration:(id)a0;

@end
