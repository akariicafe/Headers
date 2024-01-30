@class NSMutableSet, NSMutableArray;

@interface VCMediaStreamMultiwayConfigVideo : VCMediaStreamMultiwayConfig

@property (nonatomic) long long resolution;
@property (nonatomic) unsigned int framerate;
@property (readonly, nonatomic) NSMutableSet *payloads;
@property (nonatomic) unsigned long long keyFrameInterval;
@property (readonly, nonatomic) NSMutableArray *subStreamConfigs;
@property (nonatomic) BOOL isTemporalStream;
@property (nonatomic) BOOL isSubStream;
@property (nonatomic) unsigned short parentStreamID;

- (id)init;
- (void)addPayload:(int)a0;
- (void)dealloc;
- (id)streamIds;
- (void)addSubStreamConfig:(id)a0;

@end
