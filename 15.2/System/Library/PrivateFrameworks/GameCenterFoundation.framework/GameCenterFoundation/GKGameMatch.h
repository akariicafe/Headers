@class GKGame, GKPlayer, NSDate, GKRecentMatchInternal;

@interface GKGameMatch : NSObject

@property (retain) GKRecentMatchInternal *internal;
@property (retain, nonatomic) GKPlayer *player;
@property (retain, nonatomic) GKGame *game;
@property (retain, nonatomic) NSDate *date;

+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (BOOL)instancesRespondToSelector:(SEL)a0;

- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithInternalRepresentation:(id)a0 game:(id)a1;

@end
