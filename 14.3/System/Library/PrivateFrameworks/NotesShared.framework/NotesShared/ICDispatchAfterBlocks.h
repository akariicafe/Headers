@protocol NSCopying;

@interface ICDispatchAfterBlocks : NSObject

@property (copy, nonatomic) id<NSCopying> identifier;

- (void)performBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)cancelAll;
- (void)dealloc;
- (void)dispatchAfter:(double)a0 withBlock:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0;

@end
