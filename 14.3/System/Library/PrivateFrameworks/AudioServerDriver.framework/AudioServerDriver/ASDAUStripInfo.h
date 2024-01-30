@class NSString, NSDictionary;

@interface ASDAUStripInfo : ASDDSPItemInfo

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSDictionary *value;

+ (BOOL)containsOnlyAUStrips:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0 resourcePath:(id)a1;

@end
