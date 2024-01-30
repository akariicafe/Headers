@class NSString, NSArray, NSDictionary;

@interface SNDSPGraphInfo : SNDSPItemInfo

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSArray *includePaths;
@property (retain, nonatomic) NSDictionary *substitutions;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0 resourcePath:(id)a1;

@end
