@class MLCTensor;

@interface MLCControlTreeNode : NSObject <NSCopying>

@property (readonly, nonatomic) MLCTensor *predicate;
@property (readonly, nonatomic) BOOL needToNegate;

+ (id)controlTreeNodeWithPredicate:(id)a0 needToNegate:(BOOL)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTensor:(id)a0 needToNegate:(BOOL)a1;

@end
