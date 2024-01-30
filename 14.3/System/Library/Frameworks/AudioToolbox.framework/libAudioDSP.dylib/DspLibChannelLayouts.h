@interface DspLibChannelLayouts : NSObject

+ (id)supportedLayouts;
+ (id)channelNamesForLayout:(unsigned int)a0;
+ (id)channelLayoutName:(unsigned int)a0;
+ (id)supportedLayoutNamesForChannelCount:(unsigned int)a0;

@end
