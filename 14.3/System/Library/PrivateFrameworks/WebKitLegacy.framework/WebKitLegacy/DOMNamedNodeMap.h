@interface DOMNamedNodeMap : DOMObject

@property (readonly) unsigned int length;

- (id)item:(unsigned int)a0;
- (void)dealloc;
- (id)setNamedItem:(id)a0;
- (id)getNamedItem:(id)a0;
- (id)removeNamedItem:(id)a0;
- (id)getNamedItemNS:(id)a0 localName:(id)a1;
- (id)setNamedItemNS:(id)a0;
- (id)removeNamedItemNS:(id)a0 localName:(id)a1;
- (id)getNamedItemNS:(id)a0 :(id)a1;
- (id)removeNamedItemNS:(id)a0 :(id)a1;

@end
