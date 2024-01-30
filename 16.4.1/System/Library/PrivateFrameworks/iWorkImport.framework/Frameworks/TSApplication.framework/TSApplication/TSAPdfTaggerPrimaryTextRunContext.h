@interface TSAPdfTaggerPrimaryTextRunContext : TSAPdfTaggerContext

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } charRange;

- (id)initWithStateOfTagger:(id)a0 charRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
