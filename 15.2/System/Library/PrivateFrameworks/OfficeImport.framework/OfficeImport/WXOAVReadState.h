@class WDParagraph, WXReadState, NSMutableDictionary;

@interface WXOAVReadState : OAVReadState {
    WXReadState *mWxState;
    WDParagraph *mParagraph;
    NSMutableDictionary *mNextVmlShapeIdToTextBoxMap;
}

- (void).cxx_destruct;
- (id)currentParagraph;
- (void)setCurrentParagraph:(id)a0;
- (id)nextVmlShapeIdToTextBoxMap;
- (id)wxReadState;
- (id)initWithWXReadState:(id)a0;

@end
