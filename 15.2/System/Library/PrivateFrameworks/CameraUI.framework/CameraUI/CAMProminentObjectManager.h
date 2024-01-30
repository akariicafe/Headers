@class BCSDetectedCode, BCSAction;
@protocol CAMMetadataObjectResult, CAMProminentObjectManagerDelegate;

@interface CAMProminentObjectManager : NSObject {
    id<CAMMetadataObjectResult> _currentObject;
    struct CGPoint { double x; double y; } _currentObjectPointOfInterest;
    id<CAMMetadataObjectResult> _expiringObject;
    id<CAMMetadataObjectResult> _candidateObject;
    double _candidateTimestamp;
    BCSDetectedCode *_currentlyParsingCode;
    BCSAction *_previousAction;
    BCSAction *_currentAction;
}

@property (readonly, nonatomic) id<CAMMetadataObjectResult> currentObject;
@property (readonly, nonatomic) BCSAction *currentMachineReadableCodeAction;
@property (readonly, nonatomic) unsigned long long currentObjectType;
@property (weak, nonatomic) id<CAMProminentObjectManagerDelegate> delegate;
@property (nonatomic) long long viewportAspectRatio;

- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (BOOL)_isMetadataObject:(id)a0 semanticallyEqualToMetadataObject:(id)a1;
- (void)_updateCurrentMRCActionWhenReady;
- (void)_setCurrentMachineReadableCodeAction:(id)a0 updatePreviousAction:(BOOL)a1;
- (unsigned long long)typeForMetadataObject:(id)a0;
- (void)_setCurrentObject:(id)a0 forPointOfInterest:(struct CGPoint { double x0; double x1; })a1;
- (id)_candidateObjectMatchingCurrentObject:(id)a0;
- (id)_mostSignificantObjectFromObjects:(id)a0 preferredObject:(id)a1 pointOfInterest:(struct CGPoint { double x0; double x1; })a2;
- (void)_beginExpiringCurrentObjectIfNeeded;
- (double)_expirationTimeForObjectType:(unsigned long long)a0;
- (void)_handleExpiredObject:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_referenceBoundsForAspectRatio:(long long)a0;
- (BOOL)_isPoint:(struct CGPoint { double x0; double x1; })a0 equalToPoint:(struct CGPoint { double x0; double x1; })a1 tolerance:(double)a2;
- (void)_setCurrentMachineReadableCodeAction:(id)a0;
- (void)updateWithCandidateObjects:(id)a0;

@end
