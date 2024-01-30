@class NSURL, SUImageDataProvider;

@interface SUImageCacheKey : NSObject <NSCopying> {
    SUImageDataProvider *_dataProvider;
    NSURL *_url;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
