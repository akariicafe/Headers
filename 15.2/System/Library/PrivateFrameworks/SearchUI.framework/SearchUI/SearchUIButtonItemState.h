@class NSNumber, SFCommand;

@interface SearchUIButtonItemState : NSObject

@property (retain, nonatomic) NSNumber *cachedStateValue;
@property (nonatomic) BOOL isPossiblyAvailable;
@property (retain, nonatomic) SFCommand *command;

+ (id)stateObjectForCommand:(id)a0;

- (void).cxx_destruct;
- (void)checkIfAvailable:(id /* block */)a0;

@end
