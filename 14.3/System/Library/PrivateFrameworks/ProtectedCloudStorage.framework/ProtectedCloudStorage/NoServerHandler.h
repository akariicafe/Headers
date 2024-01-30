@interface NoServerHandler : NSObject

@property (readonly) id /* block */ handler;

- (void)call;
- (void).cxx_destruct;
- (id)initWithHandler:(id /* block */)a0;

@end
