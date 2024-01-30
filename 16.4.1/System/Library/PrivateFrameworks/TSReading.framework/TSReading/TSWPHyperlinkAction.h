@class TSWPHyperlinkField, TSDRep;
@protocol TSWPHyperlinkHostRepProtocol;

@interface TSWPHyperlinkAction : TSWPTwoPartAction {
    TSWPHyperlinkField *_hyperlinkField;
    TSDRep<TSWPHyperlinkHostRepProtocol> *_hyperlinkRep;
}

+ (id)hyperlinkActionWithHyperlink:(id)a0 inRep:(id)a1 action:(id /* block */)a2;

- (void)dealloc;
- (id)initWithHyperlink:(id)a0 inRep:(id)a1 action:(id /* block */)a2;

@end
