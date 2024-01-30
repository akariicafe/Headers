@class IKDOMNode;

@interface IKDOMHTMLCollection : IKJSObject <IKJSDOMHTMLCollection>

@property (weak, nonatomic) IKDOMNode *parentNode;
@property (readonly) unsigned long long length;

- (void).cxx_destruct;
- (id)item:(unsigned long long)a0;
- (id)initWithAppContext:(id)a0 node:(id)a1;

@end
