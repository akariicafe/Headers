@class NSMutableArray;

@interface NPAverage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMutableArray *samples;
@property unsigned long long size;
@property (readonly) unsigned long long average;
@property (readonly) BOOL isLastValid;
@property (readonly) BOOL isAnyValid;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addSample:(unsigned long long)a0;
- (id)shortDescription;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithSampleSize:(unsigned long long)a0;
- (void)addSamples:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
