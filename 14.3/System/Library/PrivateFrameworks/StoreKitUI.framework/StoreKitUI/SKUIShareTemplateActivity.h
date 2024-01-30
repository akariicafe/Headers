@class SKUIClientContext, SKUIShareSheetActivityViewElement;

@interface SKUIShareTemplateActivity : UIActivity {
    SKUIClientContext *_clientContext;
    SKUIShareSheetActivityViewElement *_viewElement;
}

- (id)activityType;
- (void).cxx_destruct;
- (id)_beforeActivity;
- (id)activityTitle;
- (id)activityImage;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;
- (id)initWithActivityViewElement:(id)a0 clientContext:(id)a1;

@end
