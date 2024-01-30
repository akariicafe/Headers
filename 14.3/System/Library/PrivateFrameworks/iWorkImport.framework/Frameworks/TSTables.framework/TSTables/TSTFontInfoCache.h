@class NSMapTable;

@interface TSTFontInfoCache : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _resolvedTextStyleLock;
}

@property (retain, nonatomic) NSMapTable *cache;
@property (retain, nonatomic) NSMapTable *propertyMapToTextStyleMap;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithName:(id)a0;
- (void)p_didReceiveMemoryWarning:(id)a0;
- (void)p_didEnterBackground:(id)a0;
- (id)fontInfoForTextStyle:(id)a0 withString:(id)a1;
- (id)resolvedTextStyleWithPropertyMap:(id)a0;
- (id)fontInfoForTextStyle:(id)a0;

@end
