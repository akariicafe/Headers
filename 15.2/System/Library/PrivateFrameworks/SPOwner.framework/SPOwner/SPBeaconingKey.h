@class NSData, NSDateInterval;

@interface SPBeaconingKey : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (copy, nonatomic) NSData *key;
@property (copy, nonatomic) NSData *secondaryKey;
@property (nonatomic) unsigned long long primaryIndex;
@property (nonatomic) unsigned long long secondaryIndex;

- (id)initWithDateInterval:(id)a0 key:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDateInterval:(id)a0 key:(id)a1 secondaryKey:(id)a2 primaryIndex:(unsigned long long)a3 secondaryIndex:(unsigned long long)a4;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
