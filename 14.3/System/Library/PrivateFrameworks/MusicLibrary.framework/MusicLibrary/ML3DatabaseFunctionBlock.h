@interface ML3DatabaseFunctionBlock : ML3DatabaseFunction

@property (copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (BOOL)registerWithConnection:(id)a0;

@end
