@interface CellOutrankHandlerState : ExpertSystemStateCore

@property (nonatomic) BOOL noPreconditions;

+ (id)createStateWithLabel:(id)a0 rank:(unsigned long long)a1 entryPreds:(id)a2;

- (id)description;
- (id)_initStateWithLabel:(id)a0 rank:(unsigned long long)a1 entryPreds:(id)a2;

@end
