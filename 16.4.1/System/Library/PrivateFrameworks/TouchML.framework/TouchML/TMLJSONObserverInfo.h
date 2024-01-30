@class NSString;

@interface TMLJSONObserverInfo : NSObject {
    unsigned long long _hash;
}

@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) id targetUnsafe;
@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) id /* block */ callback;

- (BOOL)isEqual:(id)a0;
- (void)notify:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithObserver:(id)a0 keyPath:(id)a1 callback:(id /* block */)a2;

@end
