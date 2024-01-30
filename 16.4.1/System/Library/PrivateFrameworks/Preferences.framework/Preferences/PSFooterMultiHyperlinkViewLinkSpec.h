@class NSURL;

@interface PSFooterMultiHyperlinkViewLinkSpec : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } linkRange;
@property (copy, nonatomic) NSURL *URL;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;

+ (id)specWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 target:(id)a1 action:(SEL)a2;
+ (id)specWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 url:(id)a1;

- (void).cxx_destruct;

@end
