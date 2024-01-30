@class ATXBiomeStreamCacheUpdateContext, ATXScreenLogUnlockSessionContext, ATXStackSystemSuggestTrackingContext, ATXSingleSuggestionSessionTrackingContext;

@interface ATXBlendingBiomeStreamLoggerContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ATXSingleSuggestionSessionTrackingContext *sessionTrackingContext;
@property (retain, nonatomic) ATXBiomeStreamCacheUpdateContext *cacheUpdateContext;
@property (retain, nonatomic) ATXStackSystemSuggestTrackingContext *stackSuggestTrackingContext;
@property (retain, nonatomic) ATXScreenLogUnlockSessionContext *screenLogUnlockSessionContext;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSessionTrackingContext:(id)a0 cacheUpdateContext:(id)a1 stackSuggestTrackingContext:(id)a2 screenLogUnlockSessionContext:(id)a3;
- (BOOL)isEqualToATXBlendingBiomeStreamLoggerContext:(id)a0;
- (void)updateWithBlendingUICacheUpdate:(id)a0;
- (void)updateWithClientModelCacheUpdate:(id)a0;
- (void)updateWithUIEvent:(id)a0;

@end
