@class NSArray, NSString, NSMutableArray;

@interface _NSCompositeLayoutRuleNode : _NSLayoutRuleNode <_NSLayoutRuleNodeParent> {
    NSMutableArray *_childNodes;
}

@property (readonly, copy) NSArray *_childRuleNodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
