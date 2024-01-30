@class DOMRange;

@interface UITextRangeImpl : UITextRange

@property (retain, nonatomic) DOMRange *domRange;
@property (nonatomic) long long affinity;

+ (id)wrapDOMRange:(id)a0;
+ (id)wrapDOMRange:(id)a0 withAffinity:(long long)a1;

- (BOOL)isEmpty;
- (id)end;
- (BOOL)isEqual:(id)a0;
- (id)start;
- (id)description;
- (void).cxx_destruct;
- (void)adjustAffinityOfPosition:(id)a0 isStart:(BOOL)a1;

@end
