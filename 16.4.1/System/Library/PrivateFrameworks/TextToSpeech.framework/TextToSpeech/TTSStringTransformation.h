@class NSString;

@interface TTSStringTransformation : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (retain, nonatomic) NSString *replacement;
@property (nonatomic) unsigned long long offsetFromEnd;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } finalRange;

- (void).cxx_destruct;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 andReplacement:(id)a1;
- (long long)sizeDelta;

@end
