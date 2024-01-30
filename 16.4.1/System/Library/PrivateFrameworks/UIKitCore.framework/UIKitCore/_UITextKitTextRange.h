@class _UITextKitTextPosition, NSTextRange;

@interface _UITextKitTextRange : UITextRange <NSCopying>

@property (retain, nonatomic) _UITextKitTextPosition *start;
@property (retain, nonatomic) _UITextKitTextPosition *end;
@property (retain, nonatomic) NSTextRange *textKit2Range;

+ (id)rangeWithStart:(id)a0 end:(id)a1;
+ (id)rangeWithTextContentManager:(id)a0 textRange:(id)a1 affinity:(long long)a2;
+ (id)rangeWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 affinity:(long long)a1;
+ (id)rangeWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

- (BOOL)isEmpty;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })asRange;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
