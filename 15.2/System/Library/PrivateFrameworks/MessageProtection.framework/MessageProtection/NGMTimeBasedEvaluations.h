@class NSDate;

@interface NGMTimeBasedEvaluations : NSObject

@property (retain) NSDate *date;

+ (id)oldestDateAllowedToSendTo;
+ (id)debugDescriptionForAction:(unsigned long long)a0;
+ (BOOL)prekeyShouldBeRolled:(id)a0;
+ (double)timeIntervalAllowedForAction:(unsigned long long)a0;
+ (id)nowDate;
+ (id)sharedManager;
+ (BOOL)validateFetchedPrekeyTimestamp:(double)a0 forEvaluationType:(unsigned long long)a1;
+ (BOOL)prekeyCanBeDeleted:(id)a0;
+ (void)setNowDate:(id)a0;

- (void).cxx_destruct;

@end
