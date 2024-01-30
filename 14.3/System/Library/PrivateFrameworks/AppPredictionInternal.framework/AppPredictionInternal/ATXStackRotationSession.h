@class ATXHomeScreenEvent, NSString, ATXSuggestionLayout, NSMutableArray, NSDate;

@interface ATXStackRotationSession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXHomeScreenEvent *startingStackChangeEvent;
@property (readonly, nonatomic) ATXHomeScreenEvent *endingStackChangeEvent;
@property (nonatomic) unsigned long long engagementStatus;
@property (readonly, nonatomic) NSMutableArray *engagementStatusHistory;
@property (readonly, nonatomic) ATXSuggestionLayout *systemSuggestSuggestionLayout;
@property (retain, nonatomic) NSDate *dwellStartDate;
@property (nonatomic) double longestDwell;
@property (nonatomic) BOOL completed;
@property (readonly, nonatomic) NSString *rotationReason;
@property (readonly, nonatomic) NSString *widgetUniqueId;
@property (readonly, nonatomic) NSString *widgetBundleId;
@property (readonly, nonatomic) NSString *widgetKind;
@property (readonly, nonatomic) NSString *blendingCacheId;
@property (readonly, nonatomic) NSDate *sessionStartDate;
@property (readonly, nonatomic) NSDate *sessionEndDate;
@property (readonly, nonatomic) int stackLocation;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStartingStackChangeEvent:(id)a0 endingStackChangeEvent:(id)a1 engagementStatus:(unsigned long long)a2 engagementStatusHistory:(id)a3 systemSuggestSuggestionLayout:(id)a4 dwellStartDate:(id)a5 longestDwell:(double)a6 completed:(BOOL)a7;
- (void)tryUpdateStackRotationEngagementStatus:(unsigned long long)a0;
- (void)markStackHiddenAtDate:(id)a0;
- (BOOL)isEqualToATXStackRotationSession:(id)a0;
- (id)initWithStartingStackChangeEvent:(id)a0;
- (void)updateWithSystemSuggestSuggestionLayout:(id)a0;
- (void)markStackShownAtDate:(id)a0;
- (void)markStackTapped;
- (void)finalizeWithEndingStackChangeEvent:(id)a0;

@end
