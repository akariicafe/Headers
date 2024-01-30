@interface SXDelayed : NSObject

@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) BOOL cancelled;
@property (retain, nonatomic) SXDelayed *strongReference;

+ (id)execute:(id /* block */)a0 delay:(double)a1;

- (void)cancel;
- (void).cxx_destruct;
- (void)invoke;
- (id)initWithBlock:(id /* block */)a0 delay:(double)a1;

@end
