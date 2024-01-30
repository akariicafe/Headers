@interface NoServerHandler : NSObject

@property (readonly) id /* block */ handler;

- (void)call;
- (id)initWithHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
