@class NSString, NSDate;

@interface WLKBasicSportingEventMetadata : WLKBasicContentMetadata

@property (readonly, copy, nonatomic) NSDate *startGameTime;
@property (readonly, copy, nonatomic) NSString *leagueName;
@property (readonly, copy, nonatomic) NSString *leagueShortName;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
