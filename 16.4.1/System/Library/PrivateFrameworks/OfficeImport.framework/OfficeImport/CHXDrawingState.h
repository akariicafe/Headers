@class CHXReadState;

@interface CHXDrawingState : OAXDrawingState {
    CHXReadState *mCHXState;
}

- (void).cxx_destruct;
- (id)chxState;
- (id)initWithCHXState:(id)a0;

@end
