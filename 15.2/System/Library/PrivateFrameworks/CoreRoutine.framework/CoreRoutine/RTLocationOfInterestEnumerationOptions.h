@class NSDateInterval;

@interface RTLocationOfInterestEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL ascending;
@property (readonly, nonatomic) unsigned long long batchSize;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) BOOL wrappedVisit;

- (void)encodeWithCoder:(id)a0;
- (id /* block */)processingBlock;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (Class)enumeratedType;
- (id)initWithAscending:(BOOL)a0 batchSize:(unsigned long long)a1 dateInterval:(id)a2 wrappedVisit:(BOOL)a3;

@end
