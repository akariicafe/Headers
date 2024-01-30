@class NSAttributedString;

@interface _MKMultiPartLabelCacheKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSAttributedString *attributedString;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithAttributedString:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
