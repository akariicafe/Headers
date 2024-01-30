@class IKHeaderElement, NSArray, IKViewElement;

@interface IKSectionElement : IKDataSourceElement {
    NSArray *_items;
}

@property (readonly, retain, nonatomic) IKHeaderElement *header;
@property (readonly, retain, nonatomic) NSArray *items;
@property (readonly, retain, nonatomic) IKViewElement *footer;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (void)appDocumentDidMarkStylesDirty;
- (id)unboundItemElements;

@end
