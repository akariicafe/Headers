@class NSSet;

@interface PPLabelStrengthSets : NSObject

@property (readonly, nonatomic) NSSet *weak;
@property (readonly, nonatomic) NSSet *strong;

+ (id)labelStrengthSetsWithWeakSet:(id)a0 strongSet:(id)a1;

- (id)initWithWeakSet:(id)a0 strongSet:(id)a1;
- (void).cxx_destruct;

@end
