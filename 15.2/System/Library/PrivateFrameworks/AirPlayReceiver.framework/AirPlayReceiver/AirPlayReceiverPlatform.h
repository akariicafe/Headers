@class AirPlayReceiverMediaRemoteHelper, DEExtension, NSString, AirPlayControllerServer;

@interface AirPlayReceiverPlatform : NSObject {
    struct AirPlayReceiverServerPrivate { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; id x2; int x3; struct OpaqueAPAdvertiser *x4; struct OpaqueAPConnectivityHelper *x5; unsigned char x6; unsigned char x7; unsigned char x8; struct HTTPServerPrivate *x9; id x10; struct HTTPServerPrivate *x11; unsigned char x12[16]; float x13; unsigned char x14; int x15; unsigned char x16; unsigned char x17; id x18; unsigned int x19; unsigned long long x20; struct OpaqueAPReceiverSystemInfo *x21; unsigned char x22; unsigned char x23; struct __CFDictionary *x24; struct __CFDictionary *x25; struct __CFDictionary *x26; unsigned int x27; int x28; unsigned int x29; struct APReceiverSessionManagerOpaque *x30; struct OpaqueFigValeria *x31; void /* function */ *x32; struct __CFString *x33; unsigned char x34; unsigned char x35; unsigned char x36; unsigned char x37; unsigned char x38; unsigned char x39; unsigned char x40; unsigned char x41; struct __CFString *x42; } *_server;
    struct __CFSet { } *_mediaAudioSessions;
    struct __CFSet { } *_mediaVideoSessions;
    struct __CFSet { } *_screenSessions;
    struct __CFSet { } *_auxAudioSessions;
    int _uiErrorNotifyToken;
    int _lockDownActivationStateToken;
    int _hijackIDChangedNotifyToken;
    unsigned char _playbackPrevented;
    int _playbackAllowNotifyToken;
    int _playbackPreventNotifyToken;
    int _prefChangedNotifyToken;
    int _managedDefaultsChangedNotificationToken;
    int _systemBufferSamples;
    int _systemSampleRate;
    unsigned char _voiceForSiri;
    unsigned char _voiceForTelephony;
    AirPlayControllerServer *_controllerServer;
    float _volumeSliderValue;
    unsigned char _useMediaRemotePerPlayerAPI;
    AirPlayReceiverMediaRemoteHelper *_mediaRemoteHelper;
    unsigned char _isAirPlayReceiverMRNowPlayingApp;
    unsigned char _isHandlingMRCommands;
    unsigned char _isMuted;
    float _volumeSliderValueBeforeMute;
    DEExtension *_wifiDiagnosticExtension;
    NSString *_wifiDECaptureUUID;
    unsigned long long _stalledSessionCount;
    unsigned long long _receiverSessionCount;
}

@property (nonatomic) unsigned char isAmbientAudioActive;
@property (nonatomic) unsigned char isMediaAudioActive;
@property (nonatomic) unsigned char isVideoActive;
@property (nonatomic) unsigned char isScreenActive;

- (void)handleMRCommand:(unsigned int)a0 translatedAPCommand:(unsigned int)a1 withOptions:(struct __CFDictionary { } *)a2;
- (void)_handleNowPlayingAppStartedPlaying:(id)a0;
- (void)_avSystemControllerVolumeConfigChanged:(id)a0;
- (void)_avSystemControllerVolumeChanged:(id)a0;
- (void)_avSystemControllerConnectionDied:(id)a0;
- (void)_registerAVSystemControllerNotificationsAndFetchInitialStates;
- (void)_registerAVSystemControllerNotifications;
- (void)_unregisterAVSystemControllerNotifications;
- (void)_handleVolumeControlTypeChange;
- (void)updateActiveSessionRegistration:(struct AirPlayReceiverSessionPrivate { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; struct AirPlayReceiverServerPrivate *x2; struct OpaqueAPReceiverRequestProcessor *x3; struct APReceiverSessionManagerOpaque *x4; void *x5; struct { void *x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; } x6; char x7[32]; char x8[17]; struct OpaqueAPReceiverStatsCollector *x9; id x10; unsigned int x11; union { struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } x0; struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x1; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x2; } x12; union { struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } x0; struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x1; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x2; } x13; unsigned char x14[16]; int x15; unsigned long long x16; unsigned char x17[6]; unsigned char x18; unsigned char x19; struct __CFString *x20; struct __CFString *x21; struct __CFString *x22; struct __CFString *x23; unsigned long long x24; unsigned int x25; unsigned long long x26; unsigned long long x27; struct { struct _CCCryptor *x0; unsigned char x1[16]; } x28; struct *x29; unsigned char x30[16]; unsigned char x31[16]; unsigned char x32; unsigned char x33; unsigned char x34; struct OpaqueAPSNetworkClock *x35; unsigned char x36; unsigned char x37; unsigned char x38; struct HTTPClientPrivate *x39; unsigned int x40; int x41; int x42; int x43; struct APPairingServicesPrivate *x44; int x45; unsigned int x46; unsigned int x47; unsigned long long x48; unsigned long long x49; unsigned long long x50; unsigned int x51; unsigned long long x52; int x53; int x54; unsigned char x55; struct __CFDictionary *x56; struct APReceiverAudioSessionPrivate *x57; unsigned int x58; struct OpaqueFigValeria *x59; struct OpaqueAPReceiverUIController *x60; unsigned int x61; struct OpaqueAPReceiverScreenSession *x62; double x63; unsigned char x64; unsigned char x65; unsigned int x66; struct __CFString *x67; unsigned char x68; unsigned char x69; unsigned char x70; unsigned char x71; unsigned char x72; unsigned long long x73; struct __CFDictionary *x74; int x75; struct __CFArray *x76; float x77; unsigned int x78; unsigned char x79; double x80; struct __CFDictionary *x81; struct __CFSet *x82; unsigned char x83; unsigned char x84; } *)a0 regType:(int)a1 regOp:(int)a2;
- (void)setReceiverSessionCountAndUpdateStateIfNeeded:(unsigned long long)a0;
- (void)updateMRNowPlayingAppState;
- (void)_handleAVAudioSessionInterruption:(id)a0;
- (void)_handleAVAudioSessionServicesReset:(id)a0;
- (void)_updateMediaSessionActivationStateBasedOnMediaAudioActiveState:(unsigned char)a0 andVideoActiveState:(unsigned char)a1;

@end
