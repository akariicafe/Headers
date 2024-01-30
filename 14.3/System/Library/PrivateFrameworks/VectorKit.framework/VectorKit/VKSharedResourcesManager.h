@class VKSharedResources, NSMapTable;

@interface VKSharedResourcesManager : NSObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
    VKSharedResources *_sharedResources;
    NSMapTable *_tilegroupIdentifierToResources;
}

+ (id)sharedResources;
+ (id)sharedManager;
+ (void)addResourceUser;
+ (void)removeResourceUser;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)resources;
- (BOOL)hasResoruces;
- (id).cxx_construct;

@end
