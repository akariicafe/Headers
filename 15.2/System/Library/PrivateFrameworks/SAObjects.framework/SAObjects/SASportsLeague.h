@class NSString, SASportsSeason;

@interface SASportsLeague : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *diplayedText;
@property (nonatomic) BOOL displayTeamLocationOverName;
@property (copy, nonatomic) NSString *displayedText;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) SASportsSeason *season;
@property (copy, nonatomic) NSString *sport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)league;
+ (id)leagueWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
