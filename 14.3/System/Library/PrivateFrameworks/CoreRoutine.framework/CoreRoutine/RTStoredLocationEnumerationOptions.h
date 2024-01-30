@class CLLocation, NSDateInterval;

@interface RTStoredLocationEnumerationOptions : RTEnumerationOptions <NSCopying>

@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) unsigned long long batchSize;
@property (copy, nonatomic) CLLocation *boundingBoxLocation;

+ (BOOL)supportsSecureCoding;

- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2;
- (id /* block */)processingBlock;
- (Class)enumeratedType;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToOptions:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2 boundingBoxLocation:(id)a3;

@end
