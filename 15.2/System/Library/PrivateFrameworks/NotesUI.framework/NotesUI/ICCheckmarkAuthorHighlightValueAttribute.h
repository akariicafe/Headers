@class UIColor;

@interface ICCheckmarkAuthorHighlightValueAttribute : NSObject <NSCopying>

@property (nonatomic) double foregroundAlpha;
@property (copy, nonatomic) UIColor *highlightColor;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
