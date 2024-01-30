@class NSString, NSDictionary;

@interface GKLeaderboardSetInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *setIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *groupIdentifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDictionary *leaderboardIdentifiers;
@property (retain, nonatomic) NSDictionary *icons;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
