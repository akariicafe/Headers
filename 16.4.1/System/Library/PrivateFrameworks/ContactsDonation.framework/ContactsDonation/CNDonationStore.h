@protocol CNDonationAgentAdapter;

@interface CNDonationStore : NSObject

@property (readonly, nonatomic) id<CNDonationAgentAdapter> adapter;

- (id)changeFromAccount:(id)a0 toAccount:(id)a1;
- (void)rejectValuesWithClusterIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithAdapter:(id)a0;
- (void)fetchDonatedMeCard:(id /* block */)a0;
- (id)donatedMeCard;
- (id)meCardDonations;
- (id)init;
- (void)rejectValueWithDonationIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeDonatedMeCardValuesForIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAllRejectionsWithCompletionHandler:(id /* block */)a0;
- (id)donatedMeCardEither;
- (void).cxx_destruct;
- (void)donateMeCardValues:(id)a0 completionHandler:(id /* block */)a1;

@end
