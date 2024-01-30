@class NSDictionary;

@interface CAMPanoramaConfiguration : NSObject <NSCoding>

@property (retain, nonatomic) NSDictionary *_maxWidthPerDevice;
@property (readonly, nonatomic) long long sampleBufferWidth;
@property (readonly, nonatomic) long long sampleBufferHeight;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } minimumFramerate;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maximumFramerate;
@property (readonly, nonatomic) int ringBufferSize;
@property (readonly, nonatomic) long long maxWidth;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithACTConfiguration:(id)a0;
- (long long)maxWidthForDevice:(long long)a0;

@end
