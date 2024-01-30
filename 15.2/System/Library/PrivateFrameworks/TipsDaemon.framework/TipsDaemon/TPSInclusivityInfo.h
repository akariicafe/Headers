@class NSArray;

@interface TPSInclusivityInfo : NSObject

@property (copy, nonatomic) NSArray *targetValues;
@property (copy, nonatomic) NSArray *excludeValues;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithTargetValues:(id)a0 excludeValues:(id)a1;

@end
