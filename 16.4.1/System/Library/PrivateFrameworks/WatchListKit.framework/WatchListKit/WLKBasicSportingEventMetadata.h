@class NSString, NSDate;

@interface WLKBasicSportingEventMetadata : WLKBasicContentMetadata

@property (readonly, copy, nonatomic) NSDate *startGameTime;
@property (readonly, copy, nonatomic) NSString *leagueName;
@property (readonly, copy, nonatomic) NSString *leagueShortName;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
