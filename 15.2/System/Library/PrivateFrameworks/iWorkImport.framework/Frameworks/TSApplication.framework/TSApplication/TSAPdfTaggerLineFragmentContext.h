@interface TSAPdfTaggerLineFragmentContext : TSAPdfTaggerContext

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } lineFragmentCharRange;

- (id)initWithStateOfTagger:(id)a0 lineFragmentCharRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
