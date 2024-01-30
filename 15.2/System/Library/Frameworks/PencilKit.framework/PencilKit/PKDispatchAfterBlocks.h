@protocol NSCopying;

@interface PKDispatchAfterBlocks : NSObject

@property (copy, nonatomic) id<NSCopying> identifier;

- (id)initWithIdentifier:(id)a0;
- (void)performBlock:(id /* block */)a0;
- (void)cancelAll;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dispatchAfter:(double)a0 withBlock:(id /* block */)a1;

@end
