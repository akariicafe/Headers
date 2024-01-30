@class NSString, NSDictionary;

@interface SNPropertyStripInfo : SNDSPItemInfo {
    NSString *_path;
    NSString *_resourcePath;
    NSDictionary *_value;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 resourcePath:(id)a1;

@end
