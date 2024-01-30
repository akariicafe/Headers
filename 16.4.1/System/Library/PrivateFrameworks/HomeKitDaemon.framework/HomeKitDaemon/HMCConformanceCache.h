@class NSSet, NSMapTable;

@interface HMCConformanceCache : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSSet *_protocols;
    NSMapTable *_conformanceCache;
}

- (id)initWithProtocol:(id)a0;
- (void)refreshConformanceOf:(Class)a0;
- (id)initWithProtocols:(id)a0;
- (BOOL)objectConforms:(id)a0;
- (BOOL)classConforms:(Class)a0;
- (void).cxx_destruct;

@end
