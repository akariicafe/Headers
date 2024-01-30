@interface FLItemChangeObserver : NSObject {
    int _notifyToken;
    id /* block */ _itemChangeObserver;
}

+ (id)observerWithChangeHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)setItemChangeHandler:(id /* block */)a0;

@end
