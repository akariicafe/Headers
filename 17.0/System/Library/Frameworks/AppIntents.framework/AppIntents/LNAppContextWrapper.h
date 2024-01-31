@class LNAppContext;

@interface LNAppContextWrapper : NSObject

@property (readonly, nonatomic) LNAppContext *appContext;

- (id)init;
- (void).cxx_destruct;
- (void)performAction:(id)a0 options:(id)a1 reportingProgress:(id)a2 delegate:(id)a3 auditToken:(struct { unsigned int x0[8]; })a4 completionHandler:(id /* block */)a5;

@end
