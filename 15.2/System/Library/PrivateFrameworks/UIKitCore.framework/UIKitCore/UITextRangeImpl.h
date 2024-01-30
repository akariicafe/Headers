@class DOMRange;

@interface UITextRangeImpl : UITextRange

@property (retain, nonatomic) DOMRange *domRange;
@property (nonatomic) long long affinity;

+ (id)wrapDOMRange:(id)a0;
+ (id)wrapDOMRange:(id)a0 withAffinity:(long long)a1;

- (id)end;
- (id)description;
- (id)start;
- (BOOL)isEmpty;
- (void)adjustAffinityOfPosition:(id)a0 isStart:(BOOL)a1;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;

@end
