@class NSString, NSSet, NSURL, WKWebView;

@interface _SFActivityItemProvider : UIActivityItemProvider

@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *pageTitle;
@property (copy, nonatomic) NSSet *excludedActivityTypes;
@property (copy, nonatomic) id /* block */ thumbnailHandler;
@property (weak, nonatomic) WKWebView *webView;

- (id)activityViewController:(id)a0 thumbnailImageForActivityType:(id)a1 suggestedSize:(struct CGSize { double x0; double x1; })a2;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (id)initWithPlaceholderItem:(id)a0;
- (id)item;
- (id)initWithURL:(id)a0 pageTitle:(id)a1 webView:(id)a2;
- (id)initWithPlaceholderItem:(id)a0 URL:(id)a1 pageTitle:(id)a2 webView:(id)a3;

@end
