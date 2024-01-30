@class NSString, SASportsAthlete;

@interface SASportsMatchupPlaySummary : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL appliesToAwayTeam;
@property (nonatomic) BOOL appliesToHomeTeam;
@property (copy, nonatomic) NSString *nonFormattedTime;
@property (retain, nonatomic) SASportsAthlete *offensivePlayer;
@property (copy, nonatomic) NSString *summaryDescription;
@property (copy, nonatomic) NSString *time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)matchupPlaySummary;
+ (id)matchupPlaySummaryWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
