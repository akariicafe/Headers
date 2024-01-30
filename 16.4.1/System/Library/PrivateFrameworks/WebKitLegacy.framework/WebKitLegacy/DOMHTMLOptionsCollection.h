@interface DOMHTMLOptionsCollection : DOMObject

@property int selectedIndex;
@property unsigned int length;

- (void)remove:(unsigned int)a0;
- (void)dealloc;
- (id)item:(unsigned int)a0;
- (void)add:(id)a0 index:(unsigned int)a1;
- (id)namedItem:(id)a0;

@end
