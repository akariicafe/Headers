@interface NMSPodcastSizeInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long totalSize;
@property (nonatomic) double totalDuration;
@property (nonatomic) unsigned long long count;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (double)sizeDurationRatio;
- (unsigned long long)averageSize;

@end
