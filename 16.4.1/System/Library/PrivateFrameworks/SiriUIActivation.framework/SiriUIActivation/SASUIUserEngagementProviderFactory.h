@interface SASUIUserEngagementProviderFactory : NSObject {
    double _samplingInterval;
    double _attentionLossTimeout;
    unsigned long long _supportedAttentionAwarenessEvents;
}

+ (id)_attentionAwarenessConfigurationWithIdentifier:(id)a0 eventMask:(unsigned long long)a1 samplingInterval:(double)a2 attentionLossTimeout:(double)a3;

- (unsigned long long)supportedEvents;
- (id)initWithSamplingInterval:(double)a0 attentionLostTimeout:(double)a1;
- (unsigned long long)_buttonPressAwarenessClientEventMask;
- (unsigned long long)_touchAttentionAwarenessEventMask;
- (id)buttonPressAwarenessClient;
- (id)touchAttentionAwarenessClient;

@end
