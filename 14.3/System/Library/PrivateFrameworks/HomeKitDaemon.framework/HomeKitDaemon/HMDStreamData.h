@class HMDStreamDataSequenceNumber, NSData, NSString;

@interface HMDStreamData : HMFObject

@property (readonly, copy) HMDStreamDataSequenceNumber *sequenceNumber;
@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithSequenceNumber:(id)a0 data:(id)a1 type:(id)a2;

@end
