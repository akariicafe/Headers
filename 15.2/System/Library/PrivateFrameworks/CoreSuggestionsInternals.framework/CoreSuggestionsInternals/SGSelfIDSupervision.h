@interface SGSelfIDSupervision : NSObject

@property (nonatomic) BOOL isPositiveExample;
@property (nonatomic) BOOL isNegativeExample;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } candidateNameRange;

- (id)initWithMessage:(id)a0 candidateName:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
