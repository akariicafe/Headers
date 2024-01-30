@class IKDOMHTMLCollection, IKDOMElement;

@interface IKDOMDocumentFragment : IKDOMNode <IKJSDOMParentNode>

@property (readonly, nonatomic) IKDOMHTMLCollection *children;
@property (readonly, nonatomic) IKDOMElement *firstElementChild;
@property (readonly, nonatomic) IKDOMElement *lastElementChild;
@property (readonly, nonatomic) unsigned long long childElementCount;

- (long long)nodeType;
- (id)nodeName;

@end
