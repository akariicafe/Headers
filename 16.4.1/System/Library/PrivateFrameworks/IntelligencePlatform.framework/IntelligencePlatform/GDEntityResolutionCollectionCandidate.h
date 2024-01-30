@class NSString;

@interface GDEntityResolutionCollectionCandidate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *primaryName;
@property (readonly, copy, nonatomic) NSString *personToPerson;
@property (readonly, copy, nonatomic) NSString *aliasConcat;
@property (readonly, copy, nonatomic) NSString *personFromOrganization;
@property (readonly, copy, nonatomic) NSString *personFromLocation;
@property (readonly, copy, nonatomic) NSString *personFromEventLocation;
@property (readonly, copy, nonatomic) NSString *personFromEvent;
@property (readonly, nonatomic) long long firstPartyMsgTwoWeeks;
@property (readonly, nonatomic) long long firstPartyMsgSixWeeks;
@property (readonly, nonatomic) long long firstPartyMsgThreeMonths;
@property (readonly, nonatomic) long long firstPartyMsgSixMonths;
@property (readonly, nonatomic) long long thirdPartyMsgTwoWeeks;
@property (readonly, nonatomic) long long thirdPartyMsgSixWeeks;
@property (readonly, nonatomic) long long thirdPartyMsgThreeMonths;
@property (readonly, nonatomic) long long thirdPartyMsgSixMonths;
@property (readonly, nonatomic) long long callTwoWeeks;
@property (readonly, nonatomic) long long callSixWeeks;
@property (readonly, nonatomic) long long callTwelveWeeks;
@property (readonly, nonatomic) long long callSixMonths;
@property (readonly, copy, nonatomic) NSString *identifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPrimaryName:(id)a0 personToPerson:(id)a1 aliasConcat:(id)a2 personFromOrganization:(id)a3 personFromLocation:(id)a4 personFromEventLocation:(id)a5 personFromEvent:(id)a6 firstPartyMsgTwoWeeks:(long long)a7 firstPartyMsgSixWeeks:(long long)a8 firstPartyMsgThreeMonths:(long long)a9 firstPartyMsgSixMonths:(long long)a10 thirdPartyMsgTwoWeeks:(long long)a11 thirdPartyMsgSixWeeks:(long long)a12 thirdPartyMsgThreeMonths:(long long)a13 thirdPartyMsgSixMonths:(long long)a14 callTwoWeeks:(long long)a15 callSixWeeks:(long long)a16 callTwelveWeeks:(long long)a17 callSixMonths:(long long)a18 identifier:(id)a19;

@end
