@class DOMHTMLOptionElement;

@interface UIDOMHTMLOptionSelectedItem : NSObject <UIWebSelectedItemPrivate> {
    BOOL _selected;
}

@property (retain, nonatomic) DOMHTMLOptionElement *_node;

- (BOOL)isGroup;
- (id)node;
- (void)dealloc;
- (void)unselect;
- (void)setSelected:(BOOL)a0;
- (id)initWithHTMLOptionNode:(id)a0;
- (BOOL)selected;

@end
