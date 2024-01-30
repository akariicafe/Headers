@class NSObject, ML3LanguageResources;
@protocol OS_dispatch_queue;

@interface ML3LanguageResourceManager : NSObject

@property (class, readonly, nonatomic) ML3LanguageResourceManager *sharedResourceManager;

@property (retain, nonatomic) ML3LanguageResources *cachedResources;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) ML3LanguageResources *resources;

- (void).cxx_destruct;
- (void)invalidateCachedResources;
- (id)_init;
- (id)_buildLanguageResources;

@end
