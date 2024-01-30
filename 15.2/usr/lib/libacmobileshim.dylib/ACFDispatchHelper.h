@interface ACFDispatchHelper : NSObject {
    id /* block */ _block;
}

- (id)initWithBlock:(id /* block */)a0;
- (void)dispatch;
- (void)dealloc;

@end
