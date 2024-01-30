@class UIColor, NSString, UIImage, WKWebView, UIView;

@interface WebViewSnapshotContentProvider : NSObject <TabSnapshotContentProvider> {
    UIImage *_snapshotImage;
}

@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrame;
@property (readonly, nonatomic) UIImage *snapshotContentImage;
@property (readonly, nonatomic) UIView *snapshotContentView;
@property (readonly, nonatomic) UIColor *snapshotBackgroundColor;
@property (readonly, nonatomic) BOOL snapshotContentShouldUnderlapTopBackdrop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
