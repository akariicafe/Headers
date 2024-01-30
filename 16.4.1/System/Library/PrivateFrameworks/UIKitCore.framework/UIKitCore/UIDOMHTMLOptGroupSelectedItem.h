@class DOMHTMLOptGroupElement;

@interface UIDOMHTMLOptGroupSelectedItem : NSObject <UIWebSelectedItemPrivate>

@property (retain, nonatomic) DOMHTMLOptGroupElement *_node;

- (BOOL)isGroup;
- (id)node;
- (void)setSelected:(BOOL)a0;
- (BOOL)selected;
- (void)dealloc;
- (id)initWithHTMLOptGroupNode:(id)a0;
- (void)unselect;

@end
