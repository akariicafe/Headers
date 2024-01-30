@class NSString;

@interface TCImportFontCacheKey : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) int size;

+ (id)createFontCacheKeyForName:(id)a0 size:(int)a1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
