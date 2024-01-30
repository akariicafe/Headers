@class NSArray, SKUIViewElement, SKUINavigationBarViewElement;

@interface SKUIExploreTemplateElement : SKUIViewElement

@property (readonly, nonatomic) NSArray *childViewElements;
@property (readonly, nonatomic) SKUIViewElement *leftSplit;
@property (readonly, nonatomic) SKUIViewElement *rightSplit;
@property (readonly, nonatomic) SKUINavigationBarViewElement *navigationBarElement;
@property (readonly, nonatomic) BOOL usesSplits;

- (void)_getLeftSplit:(id *)a0 rightSplit:(id *)a1;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
