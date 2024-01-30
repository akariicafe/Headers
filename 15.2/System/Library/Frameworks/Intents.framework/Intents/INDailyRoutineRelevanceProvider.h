@interface INDailyRoutineRelevanceProvider : INRelevanceProvider

@property (readonly, nonatomic) long long situation;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSituation:(long long)a0;
- (unsigned long long)hash;

@end
