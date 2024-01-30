@class NSDate, NSString, NSData, GKTurnBasedExchangeReplyInternal, GKTurnBasedParticipant, GKTurnBasedMatch;

@interface GKTurnBasedExchangeReply : NSObject

@property (retain, nonatomic) GKTurnBasedParticipant *recipient;
@property (retain, nonatomic) NSData *data;
@property (retain) GKTurnBasedExchangeReplyInternal *internal;
@property (weak, nonatomic) GKTurnBasedMatch *match;
@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSDate *replyDate;

+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (BOOL)instancesRespondToSelector:(SEL)a0;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)message;
- (id)initWithInternalRepresentation:(id)a0;

@end
