@class ATXStackRotationSessionManager, NSMutableArray;

@interface ATXStackSystemSuggestTrackingContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXStackRotationSessionManager *sessionManager;
@property (readonly, nonatomic) NSMutableArray *systemSuggestBlendingCaches;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)updateWithClientModelCacheUpdate:(id)a0;
- (void)updateWithBlendingUICacheUpdate:(id)a0;
- (void)updateWithUIEvent:(id)a0;
- (id)removeAllAndReturnCompletedSystemSuggestSessions;
- (id)initWithRotationSessionManager:(id)a0 systemSuggestBlendingCaches:(id)a1;
- (BOOL)isEqualToATXStackSystemSuggestTrackingContext:(id)a0;
- (id)blendingCacheWithUUID:(id)a0;

@end
