@interface AXAudioHardwareManager : NSObject

+ (id)sharedManager;
+ (void)updateTestingChannels;
+ (void)enableMultiroute;
+ (void)disableMultiroute;
+ (id)channelsForPort:(id)a0;
+ (BOOL)channelsAreAirplay:(id)a0 route:(id)a1;
+ (BOOL)channelsAreWiredHeadphones:(id)a0;
+ (void)setDefaultPortChannels:(id)a0;
+ (void)setDefaultRouteDescription:(id)a0;
+ (id)defaultRouteDescription;
+ (id)defaultPortChannels;
+ (id)defaultPort;
+ (void)setDefaultPort:(id)a0;

- (id)_savedIdForRouteDescription:(id)a0;
- (void)_handleSurroundSoundDefaults:(id)a0 returnedChannels:(id)a1 port:(id)a2 source:(long long)a3;
- (BOOL)isDolbyAtmosConfigured;
- (id)savedChannelsForOutput:(id)a0 forSource:(long long)a1;
- (void)setSavedChannels:(id)a0 forOutput:(id)a1 forSource:(long long)a2;
- (id)init;

@end
