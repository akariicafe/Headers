@class NSIndexSet;

@interface ECFlagChangeMessageActionResults : ECLocalMessageActionResults

@property (readonly, copy, nonatomic) NSIndexSet *completedUIDs;

- (id)initWithBuilder:(id /* block */)a0;
- (void).cxx_destruct;

@end
