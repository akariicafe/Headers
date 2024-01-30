@class NSString;

@interface HMDInitialStreamDataChunk : HMDStreamDataChunk

@property (readonly, copy) NSString *type;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithStreamDataDictionary:(id)a0;
- (id)initWithData:(id)a0 isLast:(BOOL)a1 type:(id)a2;

@end
