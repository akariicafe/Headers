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

+ (void)notifyAudioHashlessNotification;
+ (id)createHashResult:(unsigned short)a0 goodness:(unsigned char)a1 confidence:(unsigned char)a2 absTime:(unsigned long long)a3 frac:(unsigned char)a4;
+ (id)createRemoraHashResult:(unsigned short)a0 goodness:(unsigned char)a1 confidence:(unsigned char)a2 firstPassTriggerEndTime:(double)a3 frac:(unsigned char)a4;
+ (id)createRemoraHashResultFromPHash:(id)a0 firstPassTriggerEndTime:(double)a1;
+ (id)decodeWithMyriadPHash:(id)a0;
+ (id)generateEmptyPHash:(unsigned long long)a0 writeFile:(BOOL)a1;
+ (void)notifyAudioHashNotification;
+ (void)notifyHashlessTrigger:(unsigned long long)a0;
+ (id)overridePHash:(id)a0 withMachTime:(unsigned long long)a1;
+ (double)signalEstimateWithBuilder:(id /* block */)a0;
+ (BOOL)writeHashResultIntoFile:(id)a0;
+ (BOOL)writeHashlessResult:(unsigned long long)a0;

- (void)voiceTriggerDidDetectNearMiss:(id)a0 deviceId:(id)a1;
- (id)_audioLogDirectory;
- (id)cachedHash;
- (void)voiceTriggerDidDetectSpeakerReject:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_copyAudioDataInBuffer:(float *)a0 bufferSize:(unsigned long long)a1 copyLength:(unsigned long long)a2 fromAudioData:(void *)a3;
- (void)_copyPsdDataInBuffer:(float *)a0 copyLength:(unsigned long long)a1 fromAudioData:(void *)a2;
- (id)_generateMyriadInfo:(unsigned long long)a0 hsStart:(unsigned long long)a1 triggerEnd:(unsigned long long)a2 writeFile:(BOOL)a3 score:(float)a4 triggerSource:(id)a5 channel:(unsigned long long)a6 audioProviderUUID:(id)a7 absoluteTime:(unsigned long long)a8;
- (double)_signalEstimate:(float *)a0 length:(unsigned long long)a1;
- (void)_surfacePsdWithAudioChunk:(id)a0;
- (id)generatePHashFromVoiceTriggerInfo:(id)a0 writeFile:(BOOL)a1;
- (unsigned short)pHash:(float *)a0 length:(int)a1;

@end
