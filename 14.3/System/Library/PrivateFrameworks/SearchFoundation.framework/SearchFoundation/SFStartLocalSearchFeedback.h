@interface SFStartLocalSearchFeedback : SFStartSearchFeedback

@property (nonatomic) unsigned long long indexType;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithInput:(id)a0 triggerEvent:(unsigned long long)a1 indexType:(unsigned long long)a2;
- (id)initWithInput:(id)a0 triggerEvent:(unsigned long long)a1 indexType:(unsigned long long)a2 queryId:(unsigned long long)a3;
- (void)encodeWithCoder:(id)a0;

@end
