@class _SFURLTextPreviewView, NSArray, _SFLinkPreviewHeader, NSURL, _WKActivatedElementInfo;

@interface _SFURLTextPreviewViewController : UIViewController {
    NSArray *_linkActions;
    _WKActivatedElementInfo *_activatedElementInfo;
    _SFLinkPreviewHeader *_previewHeader;
}

@property (retain, nonatomic) _SFURLTextPreviewView *previewView;
@property (copy, nonatomic) NSURL *URL;

- (id)_activatedElementInfo;
- (void).cxx_destruct;
- (id)_linkActions;
- (void)loadView;
- (id)initWithURL:(id)a0;
- (void)_setLinkActions:(id)a0;
- (void)_setActivatedElementInfo:(id)a0;
- (id)_previewHeader;
- (void)viewWillLayoutSubviews;

@end
