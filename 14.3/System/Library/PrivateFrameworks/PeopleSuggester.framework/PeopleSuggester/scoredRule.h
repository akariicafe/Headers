@class NSNumber;

@interface scoredRule : NSObject

@property (nonatomic) long long ruleLabel;
@property (nonatomic) float ruleScore;
@property (retain, nonatomic) NSNumber *recipientUniqueID;

- (void).cxx_destruct;
- (id)initWithLabel:(long long)a0 score:(float)a1 recipientUniqueID:(id)a2;

@end
