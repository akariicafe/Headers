@class OADTablePartStyle, CMOutlineState;

@interface PMState : CMState {
    CMOutlineState *mListState;
    OADTablePartStyle *mCurrentRowStyle;
}

- (id)init;
- (void).cxx_destruct;
- (id)currentRowStyle;
- (id)listState;
- (void)setCurrentRowStyle:(id)a0;

@end
