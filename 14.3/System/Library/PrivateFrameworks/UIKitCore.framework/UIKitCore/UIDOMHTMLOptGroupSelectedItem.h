@class DOMHTMLOptGroupElement;

@interface UIDOMHTMLOptGroupSelectedItem : NSObject <UIWebSelectedItemPrivate>

@property (retain, nonatomic) DOMHTMLOptGroupElement *_node;

- (BOOL)isGroup;
- (id)node;
- (void)dealloc;
- (void)unselect;
- (void)setSelected:(BOOL)a0;
- (id)initWithHTMLOptGroupNode:(id)a0;
- (BOOL)selected;

@end
