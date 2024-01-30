@class GKTurnBasedMatch, NSArray, NSString, NSData, NSDate, GKTurnBasedParticipant, GKTurnBasedExchangeInternal;

@interface GKTurnBasedExchange : NSObject

@property (retain, nonatomic) NSArray *recipients;
@property (retain, nonatomic) NSArray *replies;
@property (retain, nonatomic) NSString *exchangeID;
@property (retain, nonatomic) GKTurnBasedParticipant *sender;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSDate *timeoutDate;
@property (retain, nonatomic) NSDate *completionDate;
@property (retain) GKTurnBasedExchangeInternal *internal;
@property (retain, nonatomic) GKTurnBasedMatch *match;
@property (readonly, nonatomic) char status;
@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSDate *sendDate;

+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)instanceMethodSignatureForSelector:(SEL)a0;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)valueForUndefinedKey:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)init;
- (id)message;
- (id)description;
- (void).cxx_destruct;
- (id)initWithInternalRepresentation:(id)a0;
- (void)_updateInternalFromMatchInternal:(id)a0;
- (void)cancelWithLocalizableMessageKey:(id)a0 arguments:(id)a1 completionHandler:(id /* block */)a2;
- (void)replyWithLocalizableMessageKey:(id)a0 arguments:(id)a1 data:(id)a2 completionHandler:(id /* block */)a3;

@end
