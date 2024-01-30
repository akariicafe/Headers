@class NSString;

@interface DOMHTMLTableCellElement : DOMHTMLElement

@property (readonly) int cellIndex;
@property (copy) NSString *align;
@property (copy) NSString *axis;
@property (copy) NSString *bgColor;
@property (copy) NSString *ch;
@property (copy) NSString *chOff;
@property int colSpan;
@property int rowSpan;
@property (copy) NSString *headers;
@property (copy) NSString *height;
@property BOOL noWrap;
@property (copy) NSString *vAlign;
@property (copy) NSString *width;
@property (copy) NSString *abbr;
@property (copy) NSString *scope;

- (id)_cellAbove;

@end
