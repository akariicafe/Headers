@class NSString, NSMutableArray;

@interface GKMultiplayerGroupInternal : GKInternalRepresentation

@property (retain, nonatomic) NSMutableArray *participants;
@property (nonatomic) long long numberOfAutomached;
@property (nonatomic) long long playedAt;
@property (retain, nonatomic) NSString *groupID;

+ (id)secureCodedPropertyKeys;

- (id)description;
- (void).cxx_destruct;

@end
