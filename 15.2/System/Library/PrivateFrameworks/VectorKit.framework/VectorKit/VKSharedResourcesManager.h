@class VKSharedResources, NSMapTable;

@interface VKSharedResourcesManager : NSObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
    VKSharedResources *_sharedResources;
    NSMapTable *_tilegroupIdentifierToResources;
}

+ (void)addResourceUser;
+ (id)sharedResources;
+ (id)sharedManager;
+ (void)removeResourceUser;

- (id)resources;
- (void)_addResourceUser;
- (void)_removeResourceUser;
- (BOOL)hasResources;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;

@end
