@class NSDictionary, NSDate;

@interface STLaunchDates : NSObject

@property (retain) NSDictionary *launchDatesByApp;
@property (retain) NSDate *latestDate;

+ (id)sharedDates;

- (void)load;
- (void)refreshDates;
- (id)init;
- (void).cxx_destruct;
- (void)_updateDates:(id)a0;
- (void)_writeDatesPref:(id)a0;
- (void)addBiomeDates;
- (void)addSpotlightDates;
- (id)launchDateForApp:(id)a0;
- (void)readDatesPref;
- (void)updateDates:(id)a0;
- (void)writeDatesPref;

@end
