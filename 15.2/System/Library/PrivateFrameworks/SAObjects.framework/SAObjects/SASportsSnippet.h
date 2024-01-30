@class SAUIAppPunchOut, SASportsLeague;

@interface SASportsSnippet : SAUISnippet

@property (retain, nonatomic) SASportsLeague *league;
@property (retain, nonatomic) SAUIAppPunchOut *leagueAppPunchOut;
@property (retain, nonatomic) SAUIAppPunchOut *punchOut;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
