@class SBAttentionAwarenessSettings, SBProximitySettings;

@interface SBRootSettings : _UISettings

@property (retain) SBAttentionAwarenessSettings *attentionAwarenessSettings;
@property (retain) SBProximitySettings *proximitySettings;

- (void).cxx_destruct;

@end
