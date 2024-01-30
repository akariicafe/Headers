@class NSPersistentContainer, PDSCDCacheContainer;

@interface PDSCDCacheReferenceProxy : NSProxy

@property (retain, nonatomic) PDSCDCacheContainer *cacheContainer;
@property (retain, nonatomic) NSPersistentContainer *persistentContainer;

- (id)initWithCacheContainer:(id)a0 persistentContainer:(id)a1;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)conformsToProtocol:(id)a0;

@end
