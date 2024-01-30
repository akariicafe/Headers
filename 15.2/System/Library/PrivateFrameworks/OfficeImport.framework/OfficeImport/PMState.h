@class OADTablePartStyle, CMOutlineState;

@interface PMState : CMState {
    CMOutlineState *mListState;
    OADTablePartStyle *mCurrentRowStyle;
}

- (void).cxx_destruct;
- (id)init;
- (id)currentRowStyle;
- (id)listState;
- (void)setCurrentRowStyle:(id)a0;

@end
