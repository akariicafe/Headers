@class VTSiriPHash;

@interface VTSiriNotifications : NSObject {
    struct __CFNotificationCenter { } *_center;
    VTSiriPHash *_hasher;
}

- (void).cxx_destruct;
- (id)init;
- (void)broadcastAudioPayload:(id)a0 numSamples:(unsigned long long)a1 superVectorScore:(double)a2 absoluteTime:(unsigned long long)a3;

@end
