@class NSDictionary, VUIAppContext;

@interface VUIActionTypeGDPR : VUIAction

@property (retain, nonatomic) NSDictionary *contextData;
@property (weak, nonatomic) VUIAppContext *appContext;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0 appContext:(id)a1;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end
