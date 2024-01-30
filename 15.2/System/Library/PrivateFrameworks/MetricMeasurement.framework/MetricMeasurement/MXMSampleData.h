@class NSArray, NSMutableDictionary, NSSet;

@interface MXMSampleData : NSObject <NSFastEnumeration, NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *enumSet;
@property (retain, nonatomic) NSMutableDictionary *tagsToSampleSets;
@property (readonly, copy, nonatomic) NSSet *tags;
@property (readonly, copy, nonatomic) NSArray *samples;
@property (readonly, nonatomic) unsigned long long numberOfSets;
@property (readonly, nonatomic) unsigned long long numberOfSamples;

+ (id)data;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSet:(id)a0;
- (id)init;
- (void)_appendData:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (id)dataMatchingFilter:(id)a0;
- (void)_appendAttribute:(id)a0;
- (void)_appendSet:(id)a0;
- (id)initWithSets:(id)a0;
- (id)sampleSetsWithTag:(id)a0;
- (id)_sampleSetsWithTag:(id)a0;
- (id)sampleSetWithTag:(id)a0 attributes:(id)a1;
- (id)_dataMatchingFilter:(id)a0;
- (id)sampleSetWithTag:(id)a0 attribute:(id)a1;

@end
