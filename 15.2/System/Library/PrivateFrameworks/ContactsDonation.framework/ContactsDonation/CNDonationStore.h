@protocol CNDonationAgentAdapter;

@interface CNDonationStore : NSObject

@property (readonly, nonatomic) id<CNDonationAgentAdapter> adapter;

- (void)removeAllRejectionsWithCompletionHandler:(id /* block */)a0;
- (id)meCardDonations;
- (void)fetchDonatedMeCard:(id /* block */)a0;
- (id)initWithAdapter:(id)a0;
- (void)donateMeCardValues:(id)a0 completionHandler:(id /* block */)a1;
- (id)donatedMeCard;
- (void)removeDonatedMeCardValuesForIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)rejectValuesWithClusterIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)rejectValueWithDonationIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)donatedMeCardEither;
- (id)changeFromAccount:(id)a0 toAccount:(id)a1;

@end
