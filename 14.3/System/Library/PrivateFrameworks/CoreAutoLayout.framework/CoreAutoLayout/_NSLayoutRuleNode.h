@protocol NSLayoutRule, _NSLayoutRuleNodeParent;

@interface _NSLayoutRuleNode : NSObject

@property (copy) id<NSLayoutRule> representedRule;
@property id<_NSLayoutRuleNodeParent> parentNode;

- (void)dealloc;
- (id)description;
- (id)initWithRule:(id)a0;

@end
