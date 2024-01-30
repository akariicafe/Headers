@class SKUIContextActionsPresentationSource, SKUIDialogTemplateViewElement;

@interface SKUIContextActionsConfiguration : NSObject

@property (retain, nonatomic) SKUIDialogTemplateViewElement *dialogTemplate;
@property (retain, nonatomic) SKUIContextActionsPresentationSource *presentationSource;

- (void).cxx_destruct;
- (id)_resourceImageForImageElement:(id)a0;
- (id)contextActions;
- (id)initWithDialogTemplate:(id)a0;

@end
