@class DOMHTMLOptionElement;

@interface UIDOMHTMLOptionSelectedItem : NSObject <UIWebSelectedItemPrivate> {
    BOOL _selected;
}

@property (retain, nonatomic) DOMHTMLOptionElement *_node;

- (BOOL)selected;
- (id)node;
- (BOOL)isGroup;
- (void)unselect;
- (void)setSelected:(BOOL)a0;
- (void)dealloc;
- (id)initWithHTMLOptionNode:(id)a0;

@end
