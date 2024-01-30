@protocol NSLayoutRule, _NSLayoutRuleNodeParent;

@interface _NSLayoutRuleNode : NSObject

@property (copy) id<NSLayoutRule> representedRule;
@property id<_NSLayoutRuleNodeParent> parentNode;

- (id)description;
- (id)initWithRule:(id)a0;
- (void)dealloc;

@end
