@class NSString, NSObject;

@interface NSKeyValueMutableOrderedSet : NSMutableOrderedSet <NSKeyValueProxyCaching> {
    NSObject *_container;
    NSString *_key;
}

+ (id)_proxyShare;

- (struct { id x0; id x1; })_proxyLocator;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (void)_proxyNonGCFinalize;
- (void)dealloc;

@end
