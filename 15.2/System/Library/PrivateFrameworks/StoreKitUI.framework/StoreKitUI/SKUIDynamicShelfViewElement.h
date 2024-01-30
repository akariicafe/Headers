@class SKUIViewElement, NSString;
@protocol SKUIEntityProviding;

@interface SKUIDynamicShelfViewElement : SKUIShelfViewElement <SKUIDynamicShelfViewElement> {
    SKUIViewElement *_cellTemplateViewElement;
}

@property (readonly, nonatomic) SKUIViewElement *cellTemplateViewElement;
@property (readonly, nonatomic) id<SKUIEntityProviding> entityProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (BOOL)isDynamicContainer;
- (void)setShelfItemViewElementValidator:(id /* block */)a0;

@end
