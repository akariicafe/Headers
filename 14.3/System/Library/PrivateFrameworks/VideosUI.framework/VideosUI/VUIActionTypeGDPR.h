@class NSDictionary, IKAppContext;

@interface VUIActionTypeGDPR : VUIAction

@property (retain, nonatomic) NSDictionary *contextData;
@property (weak, nonatomic) IKAppContext *appContext;

- (void).cxx_destruct;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithContextData:(id)a0 appContext:(id)a1;

@end
