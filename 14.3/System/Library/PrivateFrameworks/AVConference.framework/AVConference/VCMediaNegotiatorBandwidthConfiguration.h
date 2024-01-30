@interface VCMediaNegotiatorBandwidthConfiguration : NSObject

@property (nonatomic) int mode;
@property (nonatomic) int connectionType;
@property (nonatomic) unsigned int maxBandwidth;
@property (nonatomic) BOOL isDefaultMode;

- (BOOL)isEqual:(id)a0;
- (id)initWithConnectionType:(int)a0 maxBandwidth:(unsigned int)a1;
- (id)initWithMode:(int)a0 connectionType:(int)a1 maxBandwidth:(unsigned int)a2;

@end
