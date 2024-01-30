@class DOMHTMLOptGroupElement;

@interface UIDOMHTMLOptGroupSelectedItem : NSObject <UIWebSelectedItemPrivate>

@property (retain, nonatomic) DOMHTMLOptGroupElement *_node;

- (BOOL)selected;
- (id)node;
- (BOOL)isGroup;
- (void)unselect;
- (void)setSelected:(BOOL)a0;
- (void)dealloc;
- (id)initWithHTMLOptGroupNode:(id)a0;

@end
