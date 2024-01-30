@class NSDictionary, NSDate;

@interface STLaunchDates : NSObject

@property (retain) NSDictionary *launchDatesByApp;
@property (retain) NSDate *latestDate;

+ (id)sharedDates;

- (void).cxx_destruct;
- (id)init;
- (void)load;
- (void)refreshDates;
- (id)launchDateForApp:(id)a0;
- (void)_writeDatesPref:(id)a0;
- (void)_updateDates:(id)a0;
- (void)writeDatesPref;
- (void)readDatesPref;
- (void)addSpotlightDates;
- (void)addCoreDuetDates;

@end
