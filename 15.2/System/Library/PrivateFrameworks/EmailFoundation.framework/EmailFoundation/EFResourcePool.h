@class EFQueue, NSMutableSet;

@interface EFResourcePool : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _handleResourceLock;
}

@property (nonatomic) unsigned long long uncreatedResourcesCount;
@property (readonly, nonatomic) EFQueue *activeResources;
@property (readonly, nonatomic) NSMutableSet *inactiveResources;

- (void).cxx_destruct;
- (id)initWithCount:(unsigned long long)a0;
- (void)releaseResource:(id)a0;
- (id)acquireResource;

@end
