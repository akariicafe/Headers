@interface TURepeatingAction : NSObject

@property (copy, nonatomic) id /* block */ action;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) unsigned long long remainingIterations;
@property (nonatomic) double pauseDuration;

- (id)initWithAction:(id /* block */)a0;
- (void).cxx_destruct;

@end
