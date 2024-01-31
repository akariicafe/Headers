@interface _CLKTimeFormatterSubstringRange : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

+ (id)rangeWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)substringFromString:(id)a0;

@end
