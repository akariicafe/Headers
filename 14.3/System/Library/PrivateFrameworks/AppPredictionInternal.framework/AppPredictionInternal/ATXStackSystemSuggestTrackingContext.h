@class ATXStackRotationSessionManager, NSMutableArray;

@interface ATXStackSystemSuggestTrackingContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXStackRotationSessionManager *sessionManager;
@property (readonly, nonatomic) NSMutableArray *systemSuggestBlendingCaches;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)updateWithClientModelCacheUpdate:(id)a0;
- (void)updateWithBlendingUICacheUpdate:(id)a0;
- (void)updateWithUIEvent:(id)a0;
- (id)removeAllAndReturnCompletedSystemSuggestSessions;
- (id)initWithRotationSessionManager:(id)a0 systemSuggestBlendingCaches:(id)a1;
- (BOOL)isEqualToATXStackSystemSuggestTrackingContext:(id)a0;
- (id)blendingCacheWithUUID:(id)a0;

@end
