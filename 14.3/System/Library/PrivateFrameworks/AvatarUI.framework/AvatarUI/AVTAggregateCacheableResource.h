@class NSArray, NSString;

@interface AVTAggregateCacheableResource : NSObject <AVTCacheableResource>

@property (readonly, nonatomic) NSArray *cacheableResources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)volatileIdentifierForScope:(id)a0;
- (unsigned long long)costForScope:(id)a0;
- (id)persistentIdentifierForScope:(id)a0;
- (BOOL)requiresEncryption;
- (id)identifierForScope:(id)a0 persistent:(BOOL)a1;
- (id)initWithCacheableResources:(id)a0;

@end
