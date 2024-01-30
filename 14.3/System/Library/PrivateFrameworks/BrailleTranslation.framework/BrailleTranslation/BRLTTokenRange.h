@interface BRLTTokenRange : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) long long token;

- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 token:(long long)a1;

@end
