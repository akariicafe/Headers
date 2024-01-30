@class _UITextKitTextPosition;

@interface _UITextKitTextRange : UITextRange <NSCopying>

@property (retain, nonatomic) _UITextKitTextPosition *start;
@property (retain, nonatomic) _UITextKitTextPosition *end;
@property (readonly, nonatomic) long long affinity;

+ (id)rangeWithStart:(id)a0 end:(id)a1;
+ (id)rangeWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)defaultRange;
+ (id)rangeWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 affinity:(long long)a1;

- (BOOL)isEmpty;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })asRange;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
