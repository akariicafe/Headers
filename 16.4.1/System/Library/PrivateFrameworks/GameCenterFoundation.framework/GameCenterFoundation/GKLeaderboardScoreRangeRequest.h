@interface GKLeaderboardScoreRangeRequest : GKLeaderboardScoreRequest

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
