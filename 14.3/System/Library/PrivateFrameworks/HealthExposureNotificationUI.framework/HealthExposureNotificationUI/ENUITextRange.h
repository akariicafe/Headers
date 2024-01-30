@interface ENUITextRange : UITextRange

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

+ (id)rangeWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

- (id)end;
- (BOOL)isEmpty;
- (id)start;

@end
