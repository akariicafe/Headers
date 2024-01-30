@class GEOResultRefinementBar, GEOResultRefinementView, GEOPDRefinementSessionState;

@interface GEOResultRefinementGroup : NSObject

@property (retain, nonatomic) GEOResultRefinementBar *resultRefinementBar;
@property (retain, nonatomic) GEOResultRefinementView *resultRefinementView;
@property (retain, nonatomic) GEOPDRefinementSessionState *refinementSessionState;

- (void).cxx_destruct;
- (id)initWithResultRefinementBar:(id)a0 resultRefinementView:(id)a1 refinementSessionState:(id)a2;
- (id)initWithResultRefinementGroup:(id)a0;

@end
