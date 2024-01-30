@interface _UIFocusSearchInfo : NSObject

@property (copy, nonatomic) id /* block */ evaluator;
@property (nonatomic) BOOL treatFocusableItemAsLeaf;
@property (nonatomic) BOOL forceFocusToLeaveContainer;

+ (id)defaultInfo;

- (id)initWithFocusEvaluator:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)shouldIncludeFocusItem:(id)a0;

@end
