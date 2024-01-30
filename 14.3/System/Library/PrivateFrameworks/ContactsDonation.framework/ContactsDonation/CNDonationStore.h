@protocol CNDonationAgentAdapter;

@interface CNDonationStore : NSObject

@property (readonly, nonatomic) id<CNDonationAgentAdapter> adapter;

- (void)removeDonatedMeCardValuesForIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAdapter:(id)a0;
- (id)donatedMeCard;
- (id)meCardDonations;
- (void)removeAllRejectionsWithCompletionHandler:(id /* block */)a0;
- (void)rejectValueWithDonationIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)donateMeCardValues:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchDonatedMeCard:(id /* block */)a0;
- (id)changeFromAccount:(id)a0 toAccount:(id)a1;
- (id)donatedMeCardEither;
- (void)rejectValuesWithClusterIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
