@interface HKDataCollectorCollectionConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double collectionInterval;
@property (nonatomic) double maxUnsentDatumAge;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCollectionInterval:(double)a0 maxUnsentDatumAge:(double)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
