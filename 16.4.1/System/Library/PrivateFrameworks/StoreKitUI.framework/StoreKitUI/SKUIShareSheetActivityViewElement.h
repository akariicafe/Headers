@class SKUILabelViewElement, NSString, SKUIURLViewElement, NSURL, SKUIImageViewElement;

@interface SKUIShareSheetActivityViewElement : SKUIViewElement

@property (readonly, nonatomic) NSString *activityType;
@property (readonly, nonatomic) NSURL *contentSourceURL;
@property (readonly, nonatomic) SKUIImageViewElement *image;
@property (readonly, nonatomic) SKUILabelViewElement *message;
@property (readonly, nonatomic) SKUILabelViewElement *title;
@property (readonly, nonatomic) SKUIURLViewElement *URL;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
