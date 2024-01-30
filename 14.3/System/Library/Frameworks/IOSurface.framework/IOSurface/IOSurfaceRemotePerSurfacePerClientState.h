@class IOSurfaceRemotePerSurfaceGlobalState;

@interface IOSurfaceRemotePerSurfacePerClientState : NSObject {
    struct __IOSurfaceClient { } *_surface;
    unsigned int _refcount;
}

@property (retain, nonatomic) IOSurfaceRemotePerSurfaceGlobalState *globalState;
@property (readonly, nonatomic) struct __IOSurfaceClient { } *surface;
@property (readonly, nonatomic) unsigned int debugRefCount;

- (void).cxx_destruct;
- (void)dealloc;
- (id)mergeExtraData:(id)a0;
- (BOOL)removeClientReferenceToSurface;
- (id)initWithSurface:(struct __IOSurfaceClient { } *)a0 mappedAddress:(void *)a1 mappedSize:(unsigned long long)a2 extraData:(id)a3;
- (void)addClientReferenceToSurfaceWithExtraData:(id)a0;

@end
