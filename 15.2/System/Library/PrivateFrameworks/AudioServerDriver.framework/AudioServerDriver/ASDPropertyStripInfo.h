@class NSString, NSDictionary;

@interface ASDPropertyStripInfo : ASDDSPItemInfo

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSDictionary *value;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0 resourcePath:(id)a1;

@end
