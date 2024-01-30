@class NSArray, NSSet, NSDate;

@interface CLSInputTimeClue : CLSInputClue {
    NSArray *_dateComponentsArray;
    NSSet *_localDates;
    NSDate *_localStartDate;
    NSDate *_localEndDate;
    NSSet *_universalDates;
    NSDate *_universalStartDate;
    NSDate *_universalEndDate;
}

@property (copy, nonatomic) NSArray *events;

+ (id)clueWithDates:(id)a0;

- (id)universalEndDate;
- (id)universalStartDate;
- (void).cxx_destruct;
- (double)timeInterval;
- (unsigned long long)numberOfDays;
- (id)localDates;
- (id)description;
- (void)_computeDateProperties;
- (id)localEndDate;
- (void)_prepareWithProgressBlock:(id /* block */)a0;
- (id)universalDates;
- (BOOL)isEqualToClue:(id)a0;
- (id)localStartDate;

@end
