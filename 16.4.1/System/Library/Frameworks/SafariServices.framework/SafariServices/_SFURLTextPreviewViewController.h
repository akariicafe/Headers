@class _SFURLTextPreviewView, NSArray, _SFLinkPreviewHeader, NSURL, _WKActivatedElementInfo;

@interface _SFURLTextPreviewViewController : UIViewController {
    NSArray *_linkActions;
    _WKActivatedElementInfo *_activatedElementInfo;
    _SFLinkPreviewHeader *_previewHeader;
}

@property (retain, nonatomic) _SFURLTextPreviewView *previewView;
@property (copy, nonatomic) NSURL *URL;

- (id)initWithURL:(id)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (id)_linkActions;
- (id)_activatedElementInfo;
- (id)_previewHeader;
- (void)_setActivatedElementInfo:(id)a0;
- (void)_setLinkActions:(id)a0;

@end
