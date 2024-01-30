@interface _UIStatusBarAction : NSObject

@property (copy, nonatomic) id /* block */ block;
@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (id)actionWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (void)performWithStatusBar:(id)a0 completionHandler:(id /* block */)a1;

@end
