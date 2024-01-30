@class _UITextLayoutPosition, NSTextRange;

@interface _UITextLayoutRange : UITextRange <NSCopying>

@property (readonly, nonatomic) _UITextLayoutPosition *start;
@property (readonly, nonatomic) _UITextLayoutPosition *end;
@property (readonly, nonatomic) NSTextRange *range;

+ (id)textRangeWithRange:(id)a0 affinity:(long long)a1;
+ (id)textRangeWithRange:(id)a0;

- (id)description;
- (BOOL)isEmpty;
- (BOOL)isEqualToTextLayoutRange:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
