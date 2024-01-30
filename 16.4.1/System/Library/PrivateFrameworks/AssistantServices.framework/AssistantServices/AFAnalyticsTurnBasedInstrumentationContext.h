@class NSUUID, SISchemaClientTurnContext;

@interface AFAnalyticsTurnBasedInstrumentationContext : NSObject <NSSecureCoding> {
    NSUUID *_turnIdentifier;
    SISchemaClientTurnContext *_turnContext;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *turnIdentifier;

+ (id)newTurnBasedContextWithPreviousTurnID:(id)a0;
+ (id)newTurnBasedContextWithPreviousTurnID:(id)a0 analytics:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)emitInstrumentation:(id)a0;
- (void)emitInstrumentation:(id)a0 machAbsoluteTime:(unsigned long long)a1;
- (id)initWithTurnIdentifier:(id)a0;
- (id)nextTurnBasedContext;
- (id)nextTurnBasedContextForAnalytics:(id)a0;

@end
