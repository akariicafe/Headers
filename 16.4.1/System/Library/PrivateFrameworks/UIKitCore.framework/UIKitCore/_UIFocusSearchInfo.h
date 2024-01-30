@interface _UIFocusSearchInfo : NSObject

@property (copy, nonatomic) id /* block */ evaluator;
@property (nonatomic) BOOL treatFocusableItemAsLeaf;
@property (nonatomic) BOOL forceFocusToLeaveContainer;

+ (id)defaultInfo;

- (void).cxx_destruct;
- (id)initWithFocusEvaluator:(id /* block */)a0;
- (BOOL)shouldIncludeFocusItem:(id)a0;

@end
