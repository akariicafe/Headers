@class NSString;

@interface PPSocialHighlightStoreRequestKey : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long limit;
@property (readonly, nonatomic) NSString *client;
@property (readonly, nonatomic) NSString *variant;

+ (id)socialHighlightStoreRequestKeyWithLimit:(unsigned long long)a0 client:(id)a1 variant:(id)a2;

- (id)initWithLimit:(unsigned long long)a0 client:(id)a1 variant:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToSocialHighlightStoreRequestKey:(id)a0;
- (id)copyWithReplacementClient:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithReplacementLimit:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)copyWithReplacementVariant:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
