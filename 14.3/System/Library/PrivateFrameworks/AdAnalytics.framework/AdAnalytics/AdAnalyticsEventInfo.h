@class NSString;

@interface AdAnalyticsEventInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *adID;
@property (nonatomic) long long videoState;
@property (nonatomic) double currentPlaybackTime;
@property (nonatomic) double totalDuration;
@property (nonatomic) double visiblePercentage;
@property (nonatomic) float volume;
@property (nonatomic) double timestamp;
@property (nonatomic) long long sequenceNumber;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
