@class NSObject, ML3LanguageResources;
@protocol OS_dispatch_queue;

@interface ML3LanguageResourceManager : NSObject

@property (class, readonly, nonatomic) ML3LanguageResourceManager *sharedResourceManager;

@property (retain, nonatomic) ML3LanguageResources *cachedResources;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) ML3LanguageResources *resources;

- (void)invalidateCachedResources;
- (void).cxx_destruct;
- (id)_init;
- (id)_buildLanguageResources;

@end
