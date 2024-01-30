@interface IKDOMText : IKDOMCharacterData <IKJSDOMText>

- (long long)nodeType;
- (id)nodeName;
- (id)textContent;
- (void)setTextContent:(id)a0;
- (id)nodeValue;
- (void)setNodeValue:(id)a0;

@end
