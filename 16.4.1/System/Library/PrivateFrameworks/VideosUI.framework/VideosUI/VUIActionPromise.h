@class NSDictionary, VUIAppContext;

@interface VUIActionPromise : VUIAction

@property (readonly, nonatomic) NSDictionary *contextDataDictionary;
@property (weak, nonatomic) VUIAppContext *appContext;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0 appContext:(id)a1;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end
