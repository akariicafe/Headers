@interface HMDStreamDataSequenceNumber : HMFObject <NSCopying>

@property (readonly) unsigned long long value;
@property (readonly, getter=isInitial) BOOL initial;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(unsigned long long)a0;
- (id)initWithStreamDataDictionary:(id)a0;

@end
