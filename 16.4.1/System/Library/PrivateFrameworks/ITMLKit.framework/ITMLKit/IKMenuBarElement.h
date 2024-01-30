@class IKAppMenuBarDocument;

@interface IKMenuBarElement : IKCollectionElement

@property (readonly, nonatomic) IKAppMenuBarDocument *menuBarDocument;

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
