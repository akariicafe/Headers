@class NSString, NSArray, NSDictionary;

@interface ASDDSPGraphInfo : ASDDSPItemInfo

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *includePaths;
@property (copy, nonatomic) NSDictionary *substitutions;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0 resourcePath:(id)a1;

@end
