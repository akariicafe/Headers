@interface IKDOMText : IKDOMCharacterData <IKJSDOMText>

- (long long)nodeType;
- (id)nodeName;
- (id)textContent;
- (id)nodeValue;
- (void)setTextContent:(id)a0;
- (void)setNodeValue:(id)a0;

@end
