@class NSDate;

@interface NGMTimeBasedEvaluations : NSObject

@property (retain) NSDate *date;

+ (id)debugDescriptionForAction:(unsigned long long)a0;
+ (id)oldestDateAllowedToSendTo;
+ (BOOL)validateFetchedPrekeyTimestamp:(double)a0 forEvaluationType:(unsigned long long)a1;
+ (void)setNowDate:(id)a0;
+ (id)sharedManager;
+ (BOOL)prekeyCanBeDeleted:(id)a0;
+ (BOOL)prekeyShouldBeRolled:(id)a0;
+ (double)timeIntervalAllowedForAction:(unsigned long long)a0;
+ (id)nowDate;

- (void).cxx_destruct;

@end
