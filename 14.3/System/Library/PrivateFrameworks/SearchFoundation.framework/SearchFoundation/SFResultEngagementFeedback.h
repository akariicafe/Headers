@interface SFResultEngagementFeedback : SFResultFeedback <NSCopying>

@property (readonly, nonatomic) BOOL actionEngaged;
@property (nonatomic) BOOL matchesUnengagedSuggestion;
@property (nonatomic) unsigned long long triggerEvent;
@property (nonatomic) unsigned long long destination;
@property (nonatomic) unsigned long long actionTarget;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResult:(id)a0 triggerEvent:(unsigned long long)a1 destination:(unsigned long long)a2;
- (id)initWithResult:(id)a0 triggerEvent:(unsigned long long)a1 destination:(unsigned long long)a2 actionTarget:(unsigned long long)a3;
- (id)initWithResult:(id)a0 actionEngaged:(BOOL)a1 triggerEvent:(unsigned long long)a2 destination:(unsigned long long)a3;
- (void)encodeWithCoder:(id)a0;

@end
