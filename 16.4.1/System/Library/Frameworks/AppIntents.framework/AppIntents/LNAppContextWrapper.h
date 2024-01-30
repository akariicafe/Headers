@class LNAppContext;

@interface LNAppContextWrapper : NSObject

@property (readonly, nonatomic) LNAppContext *appContext;

- (id)init;
- (void).cxx_destruct;
- (void)performAction:(id)a0 options:(id)a1 delegate:(id)a2 auditToken:(struct { unsigned int x0[8]; })a3 completionHandler:(id /* block */)a4;

@end
