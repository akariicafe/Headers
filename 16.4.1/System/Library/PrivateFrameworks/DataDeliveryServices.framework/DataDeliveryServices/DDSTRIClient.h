@class NSString, TRIClient;

@interface DDSTRIClient : NSObject <DDSTRIClient>

@property (readonly) TRIClient *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refresh;
- (id)initWithClient:(id)a0;
- (id)levelForFactor:(id)a0 withNamespaceName:(id)a1;
- (void)removeUpdateHandlerForToken:(id)a0;
- (id)experimentIdentifiersWithNamespaceName:(id)a0;
- (id)addUpdateHandlerForNamespaceName:(id)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
