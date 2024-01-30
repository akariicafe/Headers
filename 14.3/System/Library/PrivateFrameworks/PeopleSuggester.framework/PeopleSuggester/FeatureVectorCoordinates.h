@interface FeatureVectorCoordinates : NSObject

@property (nonatomic) unsigned long long shareEventIndex;
@property (nonatomic) unsigned long long ruleIndex;

- (id)initWithShareEventIndex:(unsigned long long)a0 ruleIndex:(unsigned long long)a1;

@end
