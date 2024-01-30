@class NSNumber;

@interface PKTextInputStrokeProvider : PKStrokeProvider {
    NSNumber *_versionNumber;
}

@property (readonly, retain) NSNumber *strokeProviderVersion;

- (void).cxx_destruct;
- (id)initWithDrawing:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForSliceIdentifiers:(id)a0;
- (struct CGPoint { double x0; double x1; })centroidForSlicesWithIdentifiers:(id)a0;
- (BOOL)containsStrokeWithUUID:(id)a0;
- (BOOL)slicesWithIdentifiers:(id)a0 significantlyOverlapRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGPoint { double x0; double x1; })startingPointForSlicesWithIdentifiers:(id)a0;
- (id)strokesForSliceIdentifiers:(id)a0;

@end
