@class NSArray;

@interface _IKDOMPrototypeDerivationRules : NSObject

@property (readonly, copy, nonatomic) NSArray *mutationRules;
@property (readonly, copy, nonatomic) NSArray *indexPath;

+ (id)derivationRulesForDOMElement:(id)a0;
+ (void)removeRulesFromDOMElement:(id)a0;

- (void).cxx_destruct;
- (id)initWithIndexPath:(id)a0 mutationRules:(id)a1;

@end
