@class NSString, VCAudioStreamGroupCommonConfig;

@interface VCAudioStreamReceiveGroupConfig : VCMediaStreamGroupConfig <VCAudioStreamGroupConfig>

@property (retain) VCAudioStreamGroupCommonConfig *audioStreamGroupConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;

@end
