@class UIView;
@protocol SXIssueCoverViewProvider;

@interface SXIssueCoverComponentView : SXComponentView

@property (readonly, nonatomic) id<SXIssueCoverViewProvider> viewProvider;
@property (retain, nonatomic) UIView *coverView;

- (void)discardContents;
- (void).cxx_destruct;
- (void)presentComponentWithChanges:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (void)renderContents;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegate:(id)a2 componentStyleRendererFactory:(id)a3 viewProvider:(id)a4;
- (void)renderIssueCover;

@end
