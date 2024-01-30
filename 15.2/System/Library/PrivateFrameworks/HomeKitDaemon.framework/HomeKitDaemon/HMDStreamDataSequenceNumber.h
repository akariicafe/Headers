@interface HMDStreamDataSequenceNumber : HMFObject <NSCopying>

@property (readonly) unsigned long long value;
@property (readonly, getter=isInitial) BOOL initial;

- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithValue:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)initWithStreamDataDictionary:(id)a0;

@end
