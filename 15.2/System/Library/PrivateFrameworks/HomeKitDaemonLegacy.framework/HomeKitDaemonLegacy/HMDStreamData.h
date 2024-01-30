@class HMDStreamDataSequenceNumber, NSData, NSString;

@interface HMDStreamData : HMFObject

@property (readonly, copy) HMDStreamDataSequenceNumber *sequenceNumber;
@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *type;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithSequenceNumber:(id)a0 data:(id)a1 type:(id)a2;

@end
