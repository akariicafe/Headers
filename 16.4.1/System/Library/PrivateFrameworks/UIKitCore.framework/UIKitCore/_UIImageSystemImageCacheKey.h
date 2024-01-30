@class NSString, UIColor;

@interface _UIImageSystemImageCacheKey : NSObject <NSCopying> {
    NSString *_identifier;
    UIColor *_tintColor;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
