@class CLLocation, NSDateInterval;

@interface RTStoredLocationEnumerationOptions : RTEnumerationOptions <NSCopying>

@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) unsigned long long batchSize;
@property (copy, nonatomic) CLLocation *boundingBoxLocation;
@property (nonatomic) int type;

+ (BOOL)supportsSecureCoding;

- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2 boundingBoxLocation:(id)a3;
- (void)encodeWithCoder:(id)a0;
- (id /* block */)processingBlock;
- (BOOL)isEqualToOptions:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2 boundingBoxLocation:(id)a3 type:(int)a4;
- (unsigned long long)hash;
- (Class)enumeratedType;

@end
