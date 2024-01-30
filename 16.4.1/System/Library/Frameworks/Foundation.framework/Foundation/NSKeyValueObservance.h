@class NSKeyValueProperty, NSObject;

@interface NSKeyValueObservance : NSObject {
    NSObject *_observer;
    NSKeyValueProperty *_property;
    void *_context;
    NSObject *_originalObservable;
    unsigned char _options : 6;
    unsigned char _cachedIsShareable : 1;
    unsigned char _isInternalObservationHelper : 1;
}

- (id)_initWithObserver:(id)a0 property:(id)a1 options:(unsigned long long)a2 context:(void *)a3 originalObservable:(id)a4;
- (BOOL)isEqual:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (unsigned long long)hash;
- (id)description;

@end
