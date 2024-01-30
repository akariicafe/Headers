@class NSString;

@interface CNDonationAgentXPCAdapter : NSObject <CNDonationAgentAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newXPCConnection;
+ (void)donateMeCardValues:(id)a0 scope:(id)a1;
+ (void)removeDonatedMeCardValuesForIdentifiers:(id)a0 scope:(id)a1;
+ (void)fetchDonatedMeCardWithScope:(id)a0;
+ (void)meCardDonationsWithScope:(id)a0;
+ (void)rejectValueWithDonationIdentifier:(id)a0 scope:(id)a1;
+ (void)changeFromAccount:(id)a0 toAccount:(id)a1 scope:(id)a2;
+ (void)rejectValuesWithClusterIdentifier:(id)a0 scope:(id)a1;
+ (void)removeAllRejectionsWithScope:(id)a0;

- (id)meCardDonations;
- (id)rejectValueWithDonationIdentifier:(id)a0;
- (id)donateMeCardValues:(id)a0;
- (id)rejectValuesWithClusterIdentifier:(id)a0;
- (id)removeDonatedMeCardValuesForIdentifiers:(id)a0;
- (id)removeAllRejections;
- (id)donatedMeCardEither;
- (id)changeFromAccount:(id)a0 toAccount:(id)a1;
- (id)fetchDonatedMeCard;

@end
