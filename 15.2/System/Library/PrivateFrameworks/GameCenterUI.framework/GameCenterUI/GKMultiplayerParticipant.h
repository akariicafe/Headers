@class GKPlayer;

@interface GKMultiplayerParticipant : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (nonatomic) long long status;
@property (retain, nonatomic) GKPlayer *player;
@property (nonatomic) long long number;

+ (id)stringFromGKMultiplayerParticipantStatus:(long long)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
