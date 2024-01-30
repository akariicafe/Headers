@class NSString;

@interface SearchForSportsIntent : INIntent

@property (nonatomic, copy) NSString *sportName;
@property (nonatomic, copy) NSString *leagueName;
@property (nonatomic, copy) NSString *teamName;
@property (nonatomic, copy) NSString *athleteName;
@property (nonatomic, copy) NSString *sportQId;
@property (nonatomic, copy) NSString *leagueQId;
@property (nonatomic, copy) NSString *teamQId;
@property (nonatomic, copy) NSString *athleteQId;

- (id)initWithCoder:(id)a0;
- (id)init;

@end
