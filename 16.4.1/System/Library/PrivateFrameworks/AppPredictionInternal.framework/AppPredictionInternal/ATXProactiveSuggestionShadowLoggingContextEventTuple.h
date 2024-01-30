@class BMStoreEvent, ATXProactiveSuggestionShadowLoggingContext;

@interface ATXProactiveSuggestionShadowLoggingContextEventTuple : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BMStoreEvent *event;
@property (readonly, nonatomic) ATXProactiveSuggestionShadowLoggingContext *shadowLoggingContext;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithEvent:(id)a0 shadowLoggingContext:(id)a1;
- (BOOL)isEqualToATXProactiveSuggestionShadowLoggingContextEventTuple:(id)a0;

@end
