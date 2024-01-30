@class CLLocation, NSDateInterval;

@interface RTStoredLocationEnumerationOptions : RTEnumerationOptions <NSCopying>

@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) unsigned long long batchSize;
@property (copy, nonatomic) CLLocation *boundingBoxLocation;
@property (nonatomic) int type;
@property (nonatomic) BOOL smoothingRequired;
@property (nonatomic) BOOL downsampleRequired;
@property (nonatomic) double smoothingErrorThreshold;

+ (BOOL)supportsSecureCoding;

- (id /* block */)processingBlock;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2 boundingBoxLocation:(id)a3 type:(int)a4 downsampleRequired:(BOOL)a5 smoothingErrorThreshold:(double)a6;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToOptions:(id)a0;
- (Class)enumeratedType;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2 boundingBoxLocation:(id)a3 type:(int)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2 boundingBoxLocation:(id)a3 type:(int)a4 downsampleRequired:(BOOL)a5;
- (BOOL)isEqual:(id)a0;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2 boundingBoxLocation:(id)a3;
- (unsigned long long)hash;
- (id)initWithDateInterval:(id)a0 horizontalAccuracy:(double)a1 batchSize:(unsigned long long)a2 boundingBoxLocation:(id)a3 type:(int)a4 smoothingRequired:(BOOL)a5 downsampleRequired:(BOOL)a6 smoothingErrorThreshold:(double)a7;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
