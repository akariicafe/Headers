@interface Timer : NSObject

+ (id)timerWithTimeInterval:(double)a0 block:(id /* block */)a1;

- (id)initWithTimeInterval:(double)a0 block:(id /* block */)a1;
- (void)cancel;

@end
