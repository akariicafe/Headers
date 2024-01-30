@class NSString;
@protocol CHStrokeProvider;

@interface CHStrokeGroupingStrategy : NSObject

@property (readonly, retain, nonatomic) id<CHStrokeProvider> strokeProvider;
@property (readonly, retain, nonatomic) NSString *strategyIdentifier;

- (void)dealloc;
- (void)getFirstStrokeIdentifier:(id *)a0 lastStrokeIdentifier:(id *)a1 inGroup:(id)a2 addingStrokeIdentifiers:(id)a3 removingStrokeIdentifiers:(id)a4;
- (id)initWithStrokeProvider:(id)a0;
- (id)strokesForIdentifiers:(id)a0;
- (id)strokeGroupFromGroup:(id)a0 addingStrokes:(id)a1;
- (id)updatedGroupingResult:(id)a0 byAddingStrokes:(id)a1 removingStrokeIdentifiers:(id)a2 stableStrokeIdentifiers:(id)a3 allSubstrokesByStrokeIdentifier:(id)a4 withCancellationBlock:(id /* block */)a5;
- (id)recognizableDrawingForStrokeGroup:(id)a0 translationVector:(struct CGVector { double x0; double x1; })a1 originalDrawing:(id *)a2 orderedStrokesIDs:(id *)a3 rescalingFactor:(double *)a4;

@end
