@class NSArray;

@interface UISystemNavigationAction : BSAction

@property (readonly, nonatomic) NSArray *destinations;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)bundleIdForDestination:(unsigned long long)a0;
- (id)_destinationContextForResponseDestination:(unsigned long long)a0;
- (id)URLForDestination:(unsigned long long)a0;
- (id)titleForDestination:(unsigned long long)a0;
- (id)initWithDestinationContexts:(id)a0 forResponseOnQueue:(id)a1 withHandler:(id /* block */)a2;
- (id)sceneIdentifierForDestination:(unsigned long long)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)initWithInfo:(id)a0 timeout:(double)a1 forResponseOnQueue:(id)a2 withHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (BOOL)sendResponseForDestination:(unsigned long long)a0;
- (long long)UIActionType;

@end
