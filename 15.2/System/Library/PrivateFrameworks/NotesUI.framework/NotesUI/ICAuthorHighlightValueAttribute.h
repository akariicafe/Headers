@interface ICAuthorHighlightValueAttribute : NSObject <NSCopying>

@property (nonatomic) double value;
@property (nonatomic, getter=isAboveImplicitHighlights) BOOL aboveImplicitHighlights;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
