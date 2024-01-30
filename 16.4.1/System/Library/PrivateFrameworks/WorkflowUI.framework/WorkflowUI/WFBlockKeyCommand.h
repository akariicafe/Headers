@interface WFBlockKeyCommand : UIKeyCommand

@property (readonly, nonatomic) id /* block */ block;

+ (id)commandWithTitle:(id)a0 input:(id)a1 modifierFlags:(long long)a2 block:(id /* block */)a3;

- (void).cxx_destruct;

@end
