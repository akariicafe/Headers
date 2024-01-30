@class TSDRep, TSAPdfTaggerState;

@interface TSAPdfTaggerDrawableContext : TSAPdfTaggerContext

@property (readonly, nonatomic) TSDRep *drawableRep;
@property (retain, nonatomic) TSAPdfTaggerState *taggerStateOutsideCore;

- (void).cxx_destruct;
- (id)initWithStateOfTagger:(id)a0 drawableRep:(id)a1;

@end
