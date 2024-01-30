@class NSString;

@interface TMLJSONObserverInfo : NSObject {
    unsigned long long _hash;
}

@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) id targetUnsafe;
@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) id /* block */ callback;

- (void)notify:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithObserver:(id)a0 keyPath:(id)a1 callback:(id /* block */)a2;

@end
