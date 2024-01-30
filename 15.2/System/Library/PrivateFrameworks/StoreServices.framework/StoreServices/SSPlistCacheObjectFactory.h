@class NSString;

@interface SSPlistCacheObjectFactory : NSObject <SSCacheObjectFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)supportsTypeIdentifier:(id)a0;
- (id)cachedObjectWithDataRepresentation:(id)a0 typeIdentifier:(id)a1;

@end
