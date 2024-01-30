@class VKSharedResources, VKInternalIconManager, NSObject;
@protocol OS_dispatch_source;

@interface VKIconManager : NSObject {
    VKSharedResources *_sharedResources;
    VKInternalIconManager *_iconManager;
    BOOL _usingSingletonIconManager;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
    NSObject<OS_dispatch_source> *_iconManagerReleaseSource;
}

+ (id)sharedManager;

- (void)purge;
- (BOOL)isCachingAtlases;
- (id)init;
- (void).cxx_destruct;
- (id)imageForName:(id)a0 contentScale:(float)a1 sizeGroup:(long long)a2 modifiers:(id)a3;
- (void)dealloc;
- (void)setIsCachingAtlases:(BOOL)a0;
- (id)imageForKey:(unsigned int)a0 value:(unsigned int)a1 contentScale:(float)a2 sizeGroup:(long long)a3 modifiers:(id)a4;
- (unsigned int)darkVariant;
- (id)_internalIconManager;
- (id)imageForStyleAttributes:(id)a0 withStylesheetName:(id)a1 contentScale:(float)a2 sizeGroup:(long long)a3 modifiers:(id)a4;
- (id)imageForIconID:(unsigned int)a0 contentScale:(float)a1 sizeGroup:(long long)a2 modifiers:(id)a3;
- (unsigned int)trafficIncidentTypeKey;
- (id).cxx_construct;
- (id)imageForDataID:(unsigned int)a0 text:(id)a1 contentScale:(float)a2 sizeGroup:(long long)a3 modifiers:(id)a4;
- (id)imageForImageSourceKey:(id)a0;
- (unsigned int)styleAttributeTransitTypeKey;
- (unsigned int)styleAttributeTransitSystemTypeKey;
- (id)imageForStyleAttributes:(id)a0 styleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> *x0; struct __shared_weak_count *x1; })a1 contentScale:(float)a2 sizeGroup:(long long)a3 modifiers:(id)a4;

@end
