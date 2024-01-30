@class GKTournament, UIColor, NSString;

@interface GKTournamentViewRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) GKTournament *tournament;
@property (nonatomic) long long playerGroup;
@property (nonatomic) long long viewType;
@property (nonatomic) long long appearanceStyle;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIColor *secondaryTintColor;
@property (retain, nonatomic) NSString *tournamentDefinitionID;

- (void).cxx_destruct;
- (id)initWithViewType:(long long)a0 tournamentDefinitionID:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
