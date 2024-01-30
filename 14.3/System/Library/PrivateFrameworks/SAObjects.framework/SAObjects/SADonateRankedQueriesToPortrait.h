@class NSArray, NSString;

@interface SADonateRankedQueriesToPortrait : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *queryDonations;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (copy, nonatomic) NSString *utterance;

+ (id)donateRankedQueriesToPortrait;
+ (id)donateRankedQueriesToPortraitWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
