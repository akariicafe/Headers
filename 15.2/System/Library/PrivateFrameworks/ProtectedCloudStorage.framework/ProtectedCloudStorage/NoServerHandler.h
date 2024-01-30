@interface NoServerHandler : NSObject

@property (readonly) id /* block */ handler;

- (void).cxx_destruct;
- (id)initWithHandler:(id /* block */)a0;
- (void)call;

@end
