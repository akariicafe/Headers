@class NSDictionary, ATXPredictionContext, NSMutableDictionary;

@interface ATXProactiveSuggestionShadowLoggingContext : NSObject <NSSecureCoding> {
    NSMutableDictionary *_clientModelCacheUpdates;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *clientModelCacheUpdates;
@property (readonly, nonatomic) ATXPredictionContext *context;

- (void)updateWithContext:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)updateWithClientModelCacheUpdate:(id)a0;
- (id)initWithClientModelCacheUpdates:(id)a0 context:(id)a1;
- (BOOL)isEqualToATXProactiveSuggestionShadowLoggingContext:(id)a0;

@end
