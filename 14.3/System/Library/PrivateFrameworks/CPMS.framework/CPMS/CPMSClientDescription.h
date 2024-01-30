@class NSDictionary;

@interface CPMSClientDescription : NSObject

@property (nonatomic) long long clientId;
@property (retain, nonatomic) NSDictionary *powerLevels;
@property (nonatomic) BOOL isContinuous;
@property (copy, nonatomic) id /* block */ notificationCallback;
@property (copy, nonatomic) id /* block */ getCurrentPower;
@property (nonatomic) unsigned int powerBudgetUpdateMinimumPeriod;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
