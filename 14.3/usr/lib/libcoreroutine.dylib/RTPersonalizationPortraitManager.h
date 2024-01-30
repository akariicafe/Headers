@class NSObject;
@protocol OS_dispatch_queue;

@interface RTPersonalizationPortraitManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (void)fetchRecentLocationDonationsSince:(id)a0 handler:(id /* block */)a1;
- (void)_fetchRecentLocationDonationsSince:(id)a0 handler:(id /* block */)a1;
- (void)fetchLocationNamesStartDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (void)feedbackUsedNamedEntities:(id)a0;

@end
