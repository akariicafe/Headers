@class PLVideoEditSource, NSArray, PTCinematographyScript, NSDictionary, PHAsset, NSOrderedSet;
@protocol PXCinematicEditControllerDelegate, PXFocusTimelineController, PTCinematographyScriptChanges;

@interface PXCinematicEditController : NSObject

@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) PLVideoEditSource *editSource;
@property (nonatomic) double metadataAperture;
@property (retain, nonatomic) PTCinematographyScript *cinematographyScript;
@property (retain, nonatomic) NSDictionary *savedManualFocusCinematographyState;
@property (retain, nonatomic) NSArray *uneditedUserDecisions;
@property (retain, nonatomic) NSOrderedSet *focusEventTimes;
@property (weak, nonatomic) id<PXCinematicEditControllerDelegate> delegate;
@property (weak, nonatomic) id<PTCinematographyScriptChanges> scriptChangesDelegate;
@property (weak, nonatomic) id<PXFocusTimelineController> focusTimelineDelegate;
@property (nonatomic) BOOL cinematicAdjustmentActive;
@property (readonly, nonatomic) double originalAperture;
@property (nonatomic) double cinematicAperture;
@property (readonly, nonatomic) double minimumCinematicAperture;
@property (readonly, nonatomic) double maximumCinematicAperture;
@property (nonatomic) long long cinematicDebugMode;

- (void).cxx_destruct;
- (id)compositionController;
- (id)cinematographyState;
- (void)_dumpAllFrames;
- (void)_updatePortraitVideoAdjustmentFromCinematography;
- (id)axDescriptionForFocusDecisionAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)canToggleBackToUserFocusState;
- (void)cinematographyWasEdited;
- (void)cinematographyWasEditedAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)isInAutoFocusState;
- (void)removeFocusDecisionAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)resetToAsShotState;
- (void)resetToCinematographyState:(id)a0;
- (void)setAsset:(id)a0 editSource:(id)a1;
- (void)toggleAutoFocusState;
- (void)updateFocusDecisions;
- (void)updateFocusDecisionsAnimatedAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
