@interface CACUserAttentionSignalProviderFactory : NSObject {
    double _samplingInterval;
    double _attentionLossTimeout;
    unsigned long long _supportedAttentionAwarenessEvents;
}

+ (id)_attentionAwarenessConfigurationWithIdentifier:(id)a0 eventMask:(unsigned long long)a1 samplingInterval:(double)a2 attentionLossTimeout:(double)a3;

- (id)wakeGestureManager;
- (unsigned long long)_faceAttentionAwarenessEventMask;
- (unsigned long long)_touchAttentionAwarenessEventMask;
- (id)initWithSamplingInterval:(double)a0 attentionLossTimeout:(double)a1 supportedAttentionAwarenessEvents:(unsigned long long)a2;
- (id)faceAttentionAwarenessClient;
- (id)touchAttentionAwarenessClient;

@end
