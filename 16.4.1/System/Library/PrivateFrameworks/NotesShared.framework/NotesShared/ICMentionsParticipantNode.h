@class NSString, NSMutableSet, NSMutableDictionary;

@interface ICMentionsParticipantNode : NSObject

@property (copy, nonatomic) NSString *key;
@property (readonly, nonatomic) NSMutableSet *participants;
@property (readonly, nonatomic) NSMutableSet *possibleParticipants;
@property (readonly, nonatomic) NSMutableDictionary *children;
@property (nonatomic) BOOL isPossibleAll;
@property (nonatomic) BOOL isAll;

- (void)addParticipant:(id)a0;
- (void)addChild:(id)a0;
- (void).cxx_destruct;
- (void)addPossibleParticipant:(id)a0;

@end
