@class NSString;

@interface NFStateMachineState : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ canTryBlock;
@property (copy, nonatomic) id /* block */ willExitBlock;
@property (copy, nonatomic) id /* block */ willEnterBlock;
@property (copy, nonatomic) id /* block */ didExitBlock;
@property (copy, nonatomic) id /* block */ didEnterBlock;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0;
- (unsigned long long)hash;
- (id)onWillEnter:(id /* block */)a0;
- (id)onWillExit:(id /* block */)a0;
- (id)onDidEnter:(id /* block */)a0;
- (id)onCanTry:(id /* block */)a0;
- (BOOL)canTry:(id)a0 withOwner:(id)a1;
- (void)willExit:(id)a0 withOwner:(id)a1;
- (void)willEnter:(id)a0 withOwner:(id)a1;
- (id)didExit:(id)a0 withOwner:(id)a1;
- (id)didEnter:(id)a0 withOwner:(id)a1;
- (id)onDidExit:(id /* block */)a0;

@end
