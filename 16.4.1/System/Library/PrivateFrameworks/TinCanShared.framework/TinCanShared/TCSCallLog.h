@class NSMutableDictionary, NSMutableOrderedSet;

@interface TCSCallLog : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *calls;
@property (retain, nonatomic) NSMutableOrderedSet *identifiers;

- (id)callWithUniqueProxyIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_trimCache;
- (void)addCall:(id)a0;

@end
