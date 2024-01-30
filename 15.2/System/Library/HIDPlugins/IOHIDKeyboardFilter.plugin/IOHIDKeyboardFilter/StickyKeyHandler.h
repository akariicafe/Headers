@interface StickyKeyHandler : NSObject {
    void *_filter;
    struct __IOHIDService { } *_service;
}

- (void)removeObserver;
- (id)initWithFilter:(void *)a0 service:(struct __IOHIDService { } *)a1;
- (void)StickyKeyNotification:(id)a0;

@end
