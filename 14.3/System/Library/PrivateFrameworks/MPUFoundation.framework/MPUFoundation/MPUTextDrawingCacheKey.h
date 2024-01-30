@class NSString;

@interface MPUTextDrawingCacheKey : NSObject <NSCopying>

@property (nonatomic) struct CGSize { double width; double height; } allowedSize;
@property (copy, nonatomic) NSString *text;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
