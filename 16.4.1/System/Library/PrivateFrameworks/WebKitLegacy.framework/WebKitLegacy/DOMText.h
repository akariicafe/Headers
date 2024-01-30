@class NSString;

@interface DOMText : DOMCharacterData

@property (readonly, copy) NSString *wholeText;

- (id)splitText:(unsigned int)a0;
- (id)replaceWholeText:(id)a0;

@end
