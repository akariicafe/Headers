@class NSIndexSet, IKAppPrototypeIdentifier, IKViewElement;

@interface IKDSEPrototypeMapping : NSObject

@property (readonly, nonatomic) IKAppPrototypeIdentifier *identifier;
@property (readonly, nonatomic) IKViewElement *viewElement;
@property (readonly, copy, nonatomic) NSIndexSet *usageIndexes;

+ (id)prototypeMappingFromAppPrototype:(id)a0 dataSourceElement:(id)a1 elementFactory:(id)a2;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 viewElement:(id)a1 usageIndexes:(id)a2;

@end
