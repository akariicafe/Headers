@class TSDMovieInfo;

@interface TSDAudioRep : TSDMediaRep

@property (readonly, nonatomic) TSDMovieInfo *movieInfo;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (void)willBeRemoved;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (void)drawInContextWithoutEffects:(struct CGContext { } *)a0 withContent:(BOOL)a1 strokeDrawOptions:(unsigned long long)a2 withOpacity:(BOOL)a3 forAlphaOnly:(BOOL)a4 drawChildren:(BOOL)a5 keepingChildrenPassingTest:(id /* block */)a6;

@end
