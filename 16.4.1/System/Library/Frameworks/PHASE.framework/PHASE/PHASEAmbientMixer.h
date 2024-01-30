@class AVAudioChannelLayout, PHASEListener;

@interface PHASEAmbientMixer : PHASEMixer

@property (readonly, nonatomic) PHASEListener *listener;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ vector; } orientation;
@property (readonly, nonatomic) AVAudioChannelLayout *inputChannelLayout;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 listener:(id)a1 inputChannelLayout:(id)a2;

@end
