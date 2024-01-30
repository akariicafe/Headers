@class NSString, NSDate;

@interface MNXPCActivity : NSObject {
    id /* block */ _codeBlock;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL repeat;
@property (readonly, nonatomic) BOOL shouldWakeDevice;
@property (readonly, nonatomic) BOOL useCoreDuetPowerBudgeting;
@property (readonly, nonatomic) BOOL runOnBattery;
@property (readonly, nonatomic) double tolerance;
@property (readonly, nonatomic) unsigned long long qualityOfService;
@property (readonly, nonatomic) unsigned long long networkRequirements;
@property (readonly, nonatomic) NSDate *scheduledDate;

+ (void)checkInActivity:(id)a0 codeBlock:(id /* block */)a1;

- (double)remainingTime;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (id)debugDescription;
- (void)scheduleForDate:(id)a0 codeBlock:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 repeat:(BOOL)a1 shouldWakeDevice:(BOOL)a2 useCoreDuetPowerBudgeting:(BOOL)a3 runOnBattery:(BOOL)a4 tolerance:(double)a5 qualityOfService:(unsigned long long)a6 networkRequirements:(unsigned long long)a7;
- (BOOL)_needsNetworkRequirement:(unsigned long long)a0;

@end
