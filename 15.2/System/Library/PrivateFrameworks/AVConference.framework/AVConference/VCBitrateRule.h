@class VCVideoRule;

@interface VCBitrateRule : NSObject

@property unsigned int bitrate;
@property int connectionType;
@property (readonly, nonatomic) VCVideoRule *limitingRule;

- (long long)compare:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithBitrate:(unsigned int)a0 connectionType:(int)a1 limitingRule:(id)a2;

@end
