@class NSCharacterSet, CHDrawing;

@interface CHClassifiableDrawing : NSObject

@property (readonly, retain, nonatomic) CHDrawing *drawing;
@property (readonly, retain, nonatomic) NSCharacterSet *characterSet;
@property (readonly, nonatomic) BOOL expandCodePoints;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizationContext;
@property (readonly, nonatomic) BOOL firstPointIsSubstrokeCut;
@property (readonly, nonatomic) BOOL lastPointIsSubstrokeCut;
@property (readonly, nonatomic) unsigned long long maxCandidateCount;

- (void)dealloc;
- (id)initWithDrawing:(id)a0 characterSet:(id)a1 expandCodePoints:(BOOL)a2 normalizationContext:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 firstPointIsSubstrokeCut:(BOOL)a4 lastPointIsSubstrokeCut:(BOOL)a5 maxCandidateCount:(unsigned long long)a6;

@end
