@class NSString;

@interface SUWebDocumentView : UIWebDocumentView <WebPolicyDelegate> {
    unsigned char _adjustHeightToFit : 1;
}

@property (nonatomic) id loadDelegate;
@property (retain, nonatomic) NSString *stylesheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 request:(id)a2 frame:(id)a3 decisionListener:(id)a4;
- (void)webView:(id)a0 didFinishLoadForFrame:(id)a1;
- (void)setHTMLFragment:(id)a0;
- (void)setPlaintextString:(id)a0;

@end
