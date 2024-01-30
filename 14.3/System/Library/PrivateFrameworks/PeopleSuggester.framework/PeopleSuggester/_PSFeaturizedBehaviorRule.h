@class BMRule, NSMutableDictionary;

@interface _PSFeaturizedBehaviorRule : NSObject

@property (retain, nonatomic) BMRule *rule;
@property (retain, nonatomic) NSMutableDictionary *features;
@property (nonatomic) double score;

- (void).cxx_destruct;
- (id)initWithRule:(id)a0 score:(double)a1 features:(id)a2;

@end
