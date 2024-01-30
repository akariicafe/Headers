@class DOMRange;

@interface UITextRangeImpl : UITextRange

@property (retain, nonatomic) DOMRange *domRange;
@property (nonatomic) long long affinity;

+ (id)wrapDOMRange:(id)a0 withAffinity:(long long)a1;
+ (id)wrapDOMRange:(id)a0;

- (id)end;
- (BOOL)isEmpty;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)start;
- (void)adjustAffinityOfPosition:(id)a0 isStart:(BOOL)a1;

@end
