@class NSMutableSet, NSMutableArray;

@interface VCMediaStreamMultiwayConfigVideo : VCMediaStreamMultiwayConfig

@property (nonatomic) long long resolution;
@property (nonatomic) unsigned int framerate;
@property (readonly, nonatomic) NSMutableSet *payloads;
@property (nonatomic) unsigned long long keyFrameInterval;
@property (readonly, nonatomic) NSMutableArray *subStreamConfigs;

- (id)init;
- (void)dealloc;
- (id)streamIds;
- (void)addPayload:(int)a0;
- (void)addSubStreamConfig:(id)a0;

@end
