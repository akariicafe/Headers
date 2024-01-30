@class NSDictionary, ATXPredictionContext, NSMutableDictionary;

@interface ATXProactiveSuggestionShadowLoggingContext : NSObject <NSSecureCoding> {
    NSMutableDictionary *_clientModelCacheUpdates;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *clientModelCacheUpdates;
@property (readonly, nonatomic) ATXPredictionContext *context;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (void)updateWithContext:(id)a0;
- (id)initWithClientModelCacheUpdates:(id)a0 context:(id)a1;
- (BOOL)isEqualToATXProactiveSuggestionShadowLoggingContext:(id)a0;
- (void)updateWithClientModelCacheUpdate:(id)a0;

@end
