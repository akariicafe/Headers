@interface ATXScoredPrediction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id predictedItem;
@property (readonly, nonatomic) float score;

+ (id)predictionsFrom:(id)a0;

- (id)initWithPredictedItem:(id)a0 score:(float)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBundleId:(id)a0 score:(float)a1;
- (void)setScore:(float)a0;
- (BOOL)isEqualToScoredPredictionItem:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
