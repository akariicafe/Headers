@class NSURL, SUImageDataProvider;

@interface SUImageCacheKey : NSObject <NSCopying> {
    SUImageDataProvider *_dataProvider;
    NSURL *_url;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
