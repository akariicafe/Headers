@class NSPredicate;

@interface GKTournamentPredicate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSPredicate *predicate;

+ (id)predicateForAvailableTournaments;
+ (id)predicateForAvailableCustomTournaments;
+ (id)predicateForAvailableAutoTournaments;
+ (id)predicateForAvailableTournamentsPlayerRegisteredIn;
+ (id)predicateForPastTournaments;
+ (id)predicateForPastAutoTournaments;
+ (id)predicateForPastCustomTournaments;

- (id)initWithPredicate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
