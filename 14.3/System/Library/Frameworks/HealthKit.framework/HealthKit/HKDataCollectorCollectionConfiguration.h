@interface HKDataCollectorCollectionConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double collectionInterval;
@property (nonatomic) double maxUnsentDatumAge;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCollectionInterval:(double)a0 maxUnsentDatumAge:(double)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
