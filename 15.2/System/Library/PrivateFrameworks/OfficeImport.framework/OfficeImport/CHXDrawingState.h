@class CHXReadState;

@interface CHXDrawingState : OAXDrawingState {
    CHXReadState *mCHXState;
}

- (void).cxx_destruct;
- (id)initWithCHXState:(id)a0;
- (id)chxState;

@end
