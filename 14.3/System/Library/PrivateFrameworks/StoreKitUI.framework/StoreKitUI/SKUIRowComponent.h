@class UIColor, SKUIRowViewElement, NSArray;

@interface SKUIRowComponent : SKUIPageComponent {
    long long _missingItemCount;
}

@property (readonly, nonatomic) SKUIRowViewElement *viewElement;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) NSArray *childComponents;
@property (readonly, nonatomic) NSArray *columnWidths;
@property (readonly, nonatomic) long long numberOfColumns;
@property (readonly, nonatomic) BOOL shouldAutoFlow;

- (void).cxx_destruct;
- (id)description;
- (long long)componentType;
- (id)initWithViewElement:(id)a0;
- (id)initWithCustomPageContext:(id)a0;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)a0 usingBlock:(id /* block */)a1;
- (BOOL)isMissingItemData;
- (id)metricsElementName;
- (id)_updateWithMissingItems:(id)a0;
- (id)_childComponentWithContext:(id)a0;
- (BOOL)_isChildMissingItemData:(id)a0;

@end
