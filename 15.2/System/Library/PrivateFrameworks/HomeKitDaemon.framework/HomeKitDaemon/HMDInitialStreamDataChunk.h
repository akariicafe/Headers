@class NSString;

@interface HMDInitialStreamDataChunk : HMDStreamDataChunk

@property (readonly, copy) NSString *type;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithStreamDataDictionary:(id)a0;
- (id)initWithData:(id)a0 isLast:(BOOL)a1 type:(id)a2;

@end
