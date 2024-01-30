@class NSMutableDictionary, NSMutableArray;

@interface ATXStackRotationSessionManager : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *stackIdToStackRotationSessions;
@property (readonly, nonatomic) NSMutableArray *completedSessions;
@property (readonly, nonatomic) NSMutableArray *recentSystemSuggestLayouts;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)updateWithBlendingUICacheUpdate:(id)a0;
- (void)updateWithUIEvent:(id)a0;
- (id)removeAllAndReturnCompletedSystemSuggestSessions;
- (id)initWithStackIdToStackRotationSessions:(id)a0 completedSessions:(id)a1 recentSystemSuggestLayouts:(id)a2;
- (void)_tryPruneSessionsOverMaxLimit;
- (void)_tryUpdateStackRotationSessionWithSystemSuggestLayout:(id)a0;
- (void)_tryEndStackRotationSessionWithStackId:(id)a0 homeScreenEvent:(id)a1;
- (void)_tryStartStackRotationSessionWithStackId:(id)a0 homeScreenEvent:(id)a1;
- (id)removeAndReturnCompletedSessions;
- (BOOL)isEqualToATXStackRotationSessionManager:(id)a0;

@end
