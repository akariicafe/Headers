@class UIView;
@protocol SXIssueCoverViewProvider;

@interface SXIssueCoverComponentView : SXComponentView

@property (readonly, nonatomic) id<SXIssueCoverViewProvider> viewProvider;
@property (retain, nonatomic) UIView *coverView;

- (void).cxx_destruct;
- (void)discardContents;
- (void)renderContents;
- (void)presentComponentWithChanges:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (void)renderIssueCover;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegate:(id)a2 componentStyleRendererFactory:(id)a3 viewProvider:(id)a4;

@end
