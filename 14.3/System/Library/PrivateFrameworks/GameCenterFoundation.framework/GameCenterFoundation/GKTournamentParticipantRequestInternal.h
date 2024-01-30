@class NSArray;

@interface GKTournamentParticipantRequestInternal : GKInternalRepresentation

@property (retain, nonatomic) NSArray *participantStates;
@property (nonatomic) BOOL friendsOnly;
@property (nonatomic) long long startIndex;
@property (nonatomic) long long count;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;

@end
