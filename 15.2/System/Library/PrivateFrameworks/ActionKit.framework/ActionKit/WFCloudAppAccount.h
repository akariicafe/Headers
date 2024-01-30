@class NSString, CLAPIEngine;

@interface WFCloudAppAccount : WFPasswordAccount <CLAPIEngineDelegate>

@property (readonly, nonatomic) CLAPIEngine *engine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceID;
+ (id)localizedServiceName;
+ (unsigned long long)storageBehaviorForPropertyWithKey:(id)a0;

- (void)refreshWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)accountInformationRetrievalSucceeded:(id)a0 connectionIdentifier:(id)a1 userInfo:(id)a2;
- (void)requestDidFailWithError:(id)a0 connectionIdentifier:(id)a1 userInfo:(id)a2;

@end
