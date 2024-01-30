@class NSDictionary;

@interface RPBroadcastConfiguration : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double clipDuration;
@property (retain, nonatomic) NSDictionary *videoCompressionProperties;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
