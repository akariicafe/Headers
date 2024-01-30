@class NSArray, NSString, SKUIActivityIndicatorViewElement, SKUINavigationBarViewElement;

@interface SKUIChartsTemplateViewElement : SKUIViewElement {
    NSString *_type;
}

@property (readonly, nonatomic) SKUIActivityIndicatorViewElement *activityIndicator;
@property (readonly, nonatomic) NSArray *columns;
@property (readonly, nonatomic) SKUINavigationBarViewElement *navigationBarElement;
@property (readonly, nonatomic) NSString *type;

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
