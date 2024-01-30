@class NSString, NSBundle, UIImageConfiguration;

@interface _UIImageCacheKey : NSObject <NSCopying> {
    NSString *_name;
    UIImageConfiguration *_configuration;
    NSBundle *_bundle;
    struct { unsigned char system : 1; unsigned char private : 1; } _flags;
}

+ (id)keyWithName:(id)a0 configuration:(id)a1 bundle:(id)a2;
+ (id)keyWithSystemName:(id)a0 private:(BOOL)a1 configuration:(id)a2;
+ (id)keyWithName:(id)a0 configuration:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
