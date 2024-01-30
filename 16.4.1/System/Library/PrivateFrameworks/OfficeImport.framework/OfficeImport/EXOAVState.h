@class EXReadState;

@interface EXOAVState : OAVReadState

@property (readonly, weak) EXReadState *exState;

- (void).cxx_destruct;
- (id)initWithEXReadState:(id)a0 packagePart:(id)a1;

@end
