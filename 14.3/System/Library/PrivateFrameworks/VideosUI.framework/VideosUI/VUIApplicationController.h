@class NSString;

@interface VUIApplicationController : TVApplicationController <IKAppContextDelegatePrivate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appContext:(id)a0 needsReloadWithUrgency:(unsigned long long)a1 options:(id)a2;
- (void)appContext:(id)a0 scriptForURL:(id)a1 cachePolicy:(unsigned long long)a2 completion:(id /* block */)a3;

@end
