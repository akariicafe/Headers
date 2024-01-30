@class NSMutableDictionary, NSMutableArray, GKPlayer;

@interface GKMatchEventQueue : NSObject

@property (retain, nonatomic) NSMutableArray *events;
@property (retain, nonatomic) GKPlayer *player;
@property (retain, nonatomic) GKPlayer *hostPlayer;
@property (retain, nonatomic) NSMutableDictionary *connectionInfo;
@property (nonatomic) long long playerState;
@property (nonatomic) long long deferedPlayerState;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) BOOL counted;
@property (nonatomic) BOOL okToSend;
@property (nonatomic) BOOL relayInitiated;
@property (nonatomic) BOOL hasInitRelayInfo;
@property (nonatomic) BOOL hasUpdateRelayInfo;

- (id)init;
- (void).cxx_destruct;

@end
