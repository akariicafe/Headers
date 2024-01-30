@class NSString, NSArray, AMSUIWebClientContext;

@interface AMSUIWebBagAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain, nonatomic) NSString *profile;
@property (retain, nonatomic) NSString *profileVersion;
@property (retain, nonatomic) NSArray *requestedKeys;
@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_fetchValuesForKeys:(id)a0 bag:(id)a1 startingAtIndex:(long long)a2 valuesArray:(id)a3 completion:(id /* block */)a4;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
