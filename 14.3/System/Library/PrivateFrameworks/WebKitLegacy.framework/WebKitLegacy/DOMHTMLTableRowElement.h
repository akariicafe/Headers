@class NSString, DOMHTMLCollection;

@interface DOMHTMLTableRowElement : DOMHTMLElement

@property (readonly) int rowIndex;
@property (readonly) int sectionRowIndex;
@property (readonly) DOMHTMLCollection *cells;
@property (copy) NSString *align;
@property (copy) NSString *bgColor;
@property (copy) NSString *ch;
@property (copy) NSString *chOff;
@property (copy) NSString *vAlign;

- (id)insertCell:(int)a0;
- (void)deleteCell:(int)a0;

@end
