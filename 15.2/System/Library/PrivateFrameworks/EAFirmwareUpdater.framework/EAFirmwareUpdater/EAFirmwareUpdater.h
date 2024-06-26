@class NSDate, NSString, NSURL, NSArray, NSTimer, NSDictionary, EASession, iAUPServer, NSObject, NSMutableData, EAAccessory, NSNumber;
@protocol OS_dispatch_queue;

@interface EAFirmwareUpdater : MobileAssetUpdater <NSStreamDelegate, iAUPServerDelegate> {
    NSString *_multiassetAppProtocol;
    NSString *_deviceClass;
    NSDictionary *_deviceOptions;
    unsigned long long _firmwareVersionMajor;
    unsigned long long _firmwareVersionMinor;
    unsigned long long _firmwareVersionRelease;
    NSNumber *_cumulativeBytesDownloaded;
    NSNumber *_totalBytesForCompleteUpdate;
    NSNumber *_cumulativeCloakTime;
    NSNumber *_currentSessionCloakTime;
    NSDate *_updateStartTime;
    NSString *_firmwareBundleFilename;
    NSURL *_firmwareBundleURL;
    id /* block */ _progressHandler;
    id /* block */ _updateHandler;
    id /* block */ _personalizationRequestHandler;
    NSArray *_buildIdentities;
    NSArray *_manifestList;
    unsigned int _manifestIndex;
    NSMutableData *_outputData;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _flushOutputLock;
    iAUPServer *_iAUPServer;
    NSObject<OS_dispatch_queue> *_eaNotificationDispatchQueue;
    BOOL _firmwareUpdateComplete;
    BOOL _firmwareUpdateIsUrgent;
    int _isExpectingReconnect;
    NSTimer *_reconnectTimer;
    BOOL _byteEscape;
    BOOL _skipReconnect;
    BOOL _skipVersionCheck;
}

@property (retain, nonatomic) EAAccessory *accessory;
@property (retain, nonatomic) NSString *protocolString;
@property (nonatomic) BOOL overrideProtocol;
@property (retain, nonatomic) EASession *session;
@property (retain, nonatomic) NSString *bootloaderProtocol;
@property (retain, nonatomic) NSString *appProtocol;
@property (retain, nonatomic) NSString *multiAssetAppProtocol;
@property (retain, nonatomic) NSString *firmwareBundleFilename;
@property (retain, nonatomic) NSURL *firmwareBundleURL;
@property (copy, nonatomic) id /* block */ applyCompletion;
@property (nonatomic) BOOL forceSilentUpdate;
@property (nonatomic) BOOL skipDFUMode;
@property (nonatomic) BOOL isMultiAssetSession;
@property (nonatomic) BOOL closeEASession;
@property (nonatomic) BOOL excludeUniqueAccessoryCheck;
@property (retain, nonatomic) NSString *currentFirmwareVersionOnAcc;
@property (retain, nonatomic) NSString *firmwareVersionAvailable;
@property (retain, nonatomic) NSString *transportType;
@property (retain, nonatomic) NSNumber *resumedFromPercentNum;
@property (retain, nonatomic) NSNumber *resumeCount;
@property (retain, nonatomic) NSNumber *cumulativeProgressPercent;
@property (retain, nonatomic) NSNumber *cumulativeTimeTaken;
@property (retain, nonatomic) NSNumber *cumulativeCloak;
@property (retain, nonatomic) NSNumber *currentSessionTimeTaken;
@property (copy, nonatomic) NSDictionary *manifestIDs;
@property (retain, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) NSString *modelNumber;
@property (retain, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)multiAssetAppProtocolStringWithEAID:(id)a0;
+ (id)findAccessoryWithProtocolString:(id)a0 serialNum:(id)a1;
+ (id)bootloaderProtocolStringWithEAID:(id)a0;
+ (id)getEAFirmwareRevisionActive:(id)a0 forProtocol:(id)a1;
+ (id)getEAFirmwareRevisionPending:(id)a0 forProtocol:(id)a1;
+ (id)appProtocolStringWithEAID:(id)a0;

- (id)writeData:(id)a0;
- (id)queryPredicate;
- (BOOL)isSleepWakeRequired;
- (void)updateProgress:(double)a0;
- (void)_accessoryDidDisconnect:(id)a0;
- (void)_accessoryDidConnect:(id)a0;
- (void)handleSessionError:(unsigned int)a0 message:(id)a1;
- (unsigned int)getWhitelistedPersonalizationFields;
- (BOOL)stitchManifestInSuperBinary:(id)a0 withManifest:(id)a1 withId:(unsigned int)a2;
- (id)validateAssetAttributes:(id)a0;
- (id)applyFirmware:(id /* block */)a0 progress:(id /* block */)a1 update:(id /* block */)a2 personalization:(id /* block */)a3;
- (id)validateAsset;
- (id)flushOutput;
- (void)setFirmwareBundle:(id)a0 withManifest:(id)a1 signature:(id)a2 certificate:(id)a3 hash:(id)a4;
- (void)handleFirmwareUpdateStatus:(id)a0;
- (void)handleInputData;
- (void)setFirmwareBundle:(id)a0;
- (void)startReconnectTimer:(int)a0;
- (void)reconnectTimerDidFire:(id)a0;
- (void)logStatusString:(id)a0;
- (id)getDeviceClassName;
- (BOOL)findAccessory;
- (BOOL)isUrgentUpdate;
- (void)setFirmwareImage:(id)a0;
- (id)initWithDeviceClass:(id)a0 assetType:(id)a1 skipDFU:(BOOL)a2 byteEscape:(BOOL)a3 skipReconnect:(BOOL)a4 skipVersionCheck:(BOOL)a5 options:(id)a6 serialNum:(id)a7;
- (BOOL)updateRequiresSuperBinary;
- (id)createEndOfUpdateEventDict:(id)a0 error:(id)a1;
- (BOOL)isDeploymentAllowed:(id)a0;
- (BOOL)updateRequiresPersonalization;
- (void)closeSession;
- (unsigned char)getPersonalizationID;
- (void)processPersonalizationInfoFromAccessory:(id)a0;
- (void)stopReconnectTimer;
- (void)firmwareUpdateComplete:(id)a0 error:(id)a1;
- (BOOL)isRestartRequired;
- (void)dealloc;
- (id)supportedProtocolForAccessory:(id)a0;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (id)openSession;
- (void)updateComplete:(id)a0 error:(id)a1;
- (id)assetWithMaxVersion:(id)a0;
- (void)personalizationResponse:(id)a0 error:(id)a1;

@end
