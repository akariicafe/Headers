@class NSNumber, RTLocation, NSDateInterval;

@interface RTStoredHintEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding> {
    unsigned long long _batchSize;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL ascending;
@property (readonly, nonatomic) RTLocation *referenceLocation;
@property (readonly, nonatomic) NSNumber *sourceFilter;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) unsigned long long limit;
@property (readonly, nonatomic) NSNumber *distance;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)enumeratedType;
- (unsigned long long)batchSize;
- (id)initWithReferenceLocation:(id)a0 ascending:(BOOL)a1 dateInterval:(id)a2 limit:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithReferenceLocation:(id)a0 sourceFilter:(id)a1 ascending:(BOOL)a2 dateInterval:(id)a3 limit:(unsigned long long)a4 batchSize:(unsigned long long)a5;
- (id)initWithReferenceLocation:(id)a0 sourceFilter:(id)a1 ascending:(BOOL)a2 distance:(id)a3 dateInterval:(id)a4 limit:(unsigned long long)a5 batchSize:(unsigned long long)a6;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
