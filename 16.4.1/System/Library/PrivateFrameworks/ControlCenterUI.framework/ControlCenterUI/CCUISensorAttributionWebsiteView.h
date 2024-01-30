@class UILabel, NSString;

@interface CCUISensorAttributionWebsiteView : SBFView <UILargeContentViewerInteractionDelegate, CCUISensorAttributionViewAnimating>

@property (retain, nonatomic) UILabel *websiteLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedExpandedRect;

- (BOOL)scalesLargeContentImage;
- (void)setBlurRadius:(double)a0;
- (BOOL)showsLargeContentViewer;
- (id)largeContentTitle;
- (void).cxx_destruct;
- (id)_titleLabelForSensorActivityData:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithSensorActivityData:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;

@end
