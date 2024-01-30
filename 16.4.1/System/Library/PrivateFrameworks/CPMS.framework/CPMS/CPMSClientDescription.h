@class NSDictionary;

@interface CPMSClientDescription : NSObject

@property (nonatomic) long long clientId;
@property (retain, nonatomic) NSDictionary *powerLevels;
@property (nonatomic) BOOL isContinuous;
@property (copy, nonatomic) id /* block */ notificationCallback;
@property (copy, nonatomic) id /* block */ getCurrentPower;
@property (nonatomic) unsigned int powerBudgetUpdateMinimumPeriod;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
