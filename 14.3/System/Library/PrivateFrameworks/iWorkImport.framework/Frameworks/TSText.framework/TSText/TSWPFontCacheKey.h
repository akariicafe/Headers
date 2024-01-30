@class NSString, NSArray;

@interface TSWPFontCacheKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) double fontSize;
@property (readonly, nonatomic) BOOL hasExtraFields;
@property (readonly, nonatomic) BOOL bold;
@property (readonly, nonatomic) BOOL italic;
@property (readonly, copy, nonatomic) NSArray *fontFeatures;

+ (id)cacheKeyWithFontName:(id)a0 size:(double)a1;
+ (id)cacheKeyWithFontName:(id)a0 fontSize:(double)a1 bold:(BOOL)a2 italic:(BOOL)a3 fontFeatures:(id)a4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithFontName:(id)a0 fontSize:(double)a1 hasExtraFields:(BOOL)a2 bold:(BOOL)a3 italic:(BOOL)a4 fontFeatures:(id)a5;

@end
