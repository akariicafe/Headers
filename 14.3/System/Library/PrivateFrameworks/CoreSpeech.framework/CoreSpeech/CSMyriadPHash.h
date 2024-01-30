@class NSData, NSObject;
@protocol OS_dispatch_queue;

@interface CSMyriadPHash : NSObject {
    float *_hammingWindow;
    struct OpaqueFFTSetup { } *_setup;
    float *_snrWindow;
    struct OpaqueFFTSetup { } *_snrSetup;
}

@property (class, copy) NSData *lastHash;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) short signalEstimate;
@property (nonatomic) unsigned char signalFractional;

+ (void)notifyHashlessTrigger:(unsigned long long)a0;
+ (id)createHashResult:(unsigned short)a0 goodness:(unsigned char)a1 confidence:(unsigned char)a2 absTime:(unsigned long long)a3 frac:(unsigned char)a4;
+ (BOOL)writeHashResultIntoFile:(id)a0;
+ (void)notifyAudioHashNotification;
+ (id)generateEmptyPHash:(unsigned long long)a0 writeFile:(BOOL)a1;
+ (void)notifyAudioHashlessNotification;
+ (BOOL)writeHashlessResult:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)cachedHash;
- (void)voiceTriggerDidDetectNearMiss:(id)a0;
- (void)voiceTriggerDidDetectSpeakerReject:(id)a0;
- (id)_audioLogDirectory;
- (unsigned short)pHash:(float *)a0 length:(int)a1;
- (id)_generateMyriadInfo:(unsigned long long)a0 writeFile:(BOOL)a1 score:(float)a2 triggerSource:(id)a3 channel:(unsigned long long)a4 audioProviderUUID:(id)a5 absoluteTime:(unsigned long long)a6;
- (id)generatePHashFromVoiceTriggerInfo:(id)a0 writeFile:(BOOL)a1;

@end
