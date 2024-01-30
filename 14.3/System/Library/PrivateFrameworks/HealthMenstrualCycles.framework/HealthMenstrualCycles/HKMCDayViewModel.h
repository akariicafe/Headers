@class NSArray, HKMCDaySummary, NSString;

@interface HKMCDayViewModel : NSObject <HKRedactedDescription>

@property (readonly, nonatomic) unsigned long long menstruationLevel;
@property (readonly, nonatomic) unsigned long long fertileWindowLevel;
@property (readonly, nonatomic, getter=isSupplementaryDataLogged) BOOL supplementaryDataLogged;
@property (readonly, nonatomic, getter=isFetched) BOOL fetched;
@property (readonly, nonatomic, getter=isPartiallyLoggedPeriod) BOOL partiallyLoggedPeriod;
@property (readonly, nonatomic) HKMCDaySummary *daySummary;
@property (readonly, nonatomic) NSArray *cycleFactors;
@property (readonly, copy) NSString *hk_redactedDescription;

+ (id)unfetchedDayViewModel;
+ (id)dayViewModelWithMenstruationLevel:(unsigned long long)a0 fertileWindowLevel:(unsigned long long)a1 daySummary:(id)a2 cycleFactors:(id)a3 partiallyLoggedPeriod:(BOOL)a4 fetched:(BOOL)a5;
+ (id)emptyDayViewModel;
+ (id)dayViewModelWithMenstruationLevel:(unsigned long long)a0 fertileWindowLevel:(unsigned long long)a1 daySummary:(id)a2 partiallyLoggedPeriod:(BOOL)a3 fetched:(BOOL)a4;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_initWithMenstruationLevel:(unsigned long long)a0 fertileWindowLevel:(unsigned long long)a1 daySummary:(id)a2 cycleFactors:(id)a3 partiallyLoggedPeriod:(BOOL)a4 fetched:(BOOL)a5;
- (id)_initWithMenstruationLevel:(unsigned long long)a0 fertileWindowLevel:(unsigned long long)a1 daySummary:(id)a2 partiallyLoggedPeriod:(BOOL)a3 fetched:(BOOL)a4;

@end
