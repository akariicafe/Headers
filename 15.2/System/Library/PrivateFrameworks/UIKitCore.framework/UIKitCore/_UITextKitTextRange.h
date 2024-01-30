@class _UITextKitTextPosition;

@interface _UITextKitTextRange : UITextRange <NSCopying>

@property (retain, nonatomic) _UITextKitTextPosition *start;
@property (retain, nonatomic) _UITextKitTextPosition *end;

+ (id)rangeWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)rangeWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 affinity:(long long)a1;
+ (id)rangeWithStart:(id)a0 end:(id)a1;

- (id)description;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })asRange;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
