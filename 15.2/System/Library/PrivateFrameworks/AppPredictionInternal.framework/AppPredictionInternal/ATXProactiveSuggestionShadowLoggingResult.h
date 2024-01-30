@class ATXClientModelCacheUpdate, ATXPredictionContext, NSDate;
@protocol BMStoreData;

@interface ATXProactiveSuggestionShadowLoggingResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<BMStoreData> shadowEvent;
@property (readonly, nonatomic) NSDate *shadowEventDate;
@property (readonly, nonatomic) ATXClientModelCacheUpdate *clientModelCacheUpdate;
@property (readonly, nonatomic) ATXPredictionContext *context;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithShadowEvent:(id)a0 shadowEventDate:(id)a1 clientModelCacheUpdate:(id)a2 context:(id)a3;
- (BOOL)isEqualToATXProactiveSuggestionShadowLoggingResult:(id)a0;

@end
