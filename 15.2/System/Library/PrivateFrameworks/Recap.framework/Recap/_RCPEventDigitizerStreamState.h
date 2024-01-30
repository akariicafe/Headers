@class RCPEventEnvironment;

@interface _RCPEventDigitizerStreamState : NSObject

@property (retain, nonatomic) RCPEventEnvironment *environment;
@property (nonatomic) double timeIntervalSinceStreamStart;
@property (nonatomic) BOOL countOfContactsTouchingDidChange;
@property (nonatomic) long long countOfContactsTouching;
@property (nonatomic) long long eventNumber;
@property (nonatomic) double streamStartTimeInterval;
@property (readonly, nonatomic) long long countOfContactsChangeAmount;

+ (id)streamStateWithEnvironment:(id)a0;

- (void).cxx_destruct;
- (void)ingestEvent:(id)a0;

@end
