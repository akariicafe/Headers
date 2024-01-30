@class NSDictionary;

@interface StreamEncodingObject : NSObject

@property (nonatomic) BOOL lossless;
@property (nonatomic) float bitrate;
@property (nonatomic) BOOL forceH264;
@property (nonatomic) float expectedFPS;
@property (retain, nonatomic) NSDictionary *extraConfigs;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLossless:(BOOL)a0 bitrate:(float)a1 forceH264:(BOOL)a2 expectedFPS:(float)a3 extraConfigs:(id)a4;

@end
