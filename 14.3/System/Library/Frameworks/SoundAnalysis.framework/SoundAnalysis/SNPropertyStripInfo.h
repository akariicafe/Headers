@class NSString, NSDictionary;

@interface SNPropertyStripInfo : SNDSPItemInfo

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *resourcePath;
@property (readonly, nonatomic) NSDictionary *value;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0 resourcePath:(id)a1;

@end
