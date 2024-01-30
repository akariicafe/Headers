@class NSString;

@interface TSWPFontCacheKey : NSObject {
    unsigned long long _hash;
}

@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) double fontSize;
@property (readonly, nonatomic) double fontWeight;

+ (id)cacheKeyWithFontName:(id)a0 size:(double)a1 weight:(double)a2;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithFontName:(id)a0 size:(double)a1 weight:(double)a2;

@end
