@class NSMutableDictionary, BWPixelBufferPool, NSMutableSet, FigM2MController, BWMeaningfulSubjectDetectionContext;

@interface BWMeaningfulSubjectTracker : NSObject {
    BOOL _msrScalingEnabled;
    BOOL _dumpEnabled;
    unsigned int _numberOfFramesSinceDetection;
    unsigned int _numberOfFramesBetweenDetections;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _coordinateSpaceForDetectedObjects;
    BWMeaningfulSubjectDetectionContext *_detectionContext;
    NSMutableSet *_inactiveAssociationObjectIdentifiers;
    NSMutableSet *_inactiveContexts;
    NSMutableDictionary *_activeContextsByAssociationObjectIdentifier;
    BWPixelBufferPool *_detectionPool;
    BWPixelBufferPool *_intermediatePool;
    BWPixelBufferPool *_examplePool;
    BWPixelBufferPool *_trackingPool;
    void *_neuralEngineContext;
    FigM2MController *_surfaceAcceleratorController;
    struct { struct { unsigned char numModels; char codeVersion[20]; char name[4][20]; char version[4][20]; unsigned char rsvd[32]; } modelInfo; unsigned int frameId; unsigned int numFaces; struct { unsigned int objectId; int category; struct { float x; float y; float width; float height; } bbox; unsigned int confidence; int yaw; int roll; int smile; int blinkLeft; int blinkRight; struct { float x; float y; float width; float height; } eyeRectLeft; struct { float x; float y; float width; float height; } eyeRectRight; unsigned char hasPoseData; unsigned char hasEyeData; unsigned char hasBlinkData; unsigned char hasSmileData; unsigned char isFrontal; int modality; } faces[10]; unsigned int numObjects; struct { unsigned int objectId; int category; struct { float x; float y; float width; float height; } bbox; unsigned int confidence; int modality; } objects[10]; unsigned int numSaliencyObjects; struct { unsigned int objectId; int category; struct { float x; float y; float width; float height; } bbox; unsigned int confidence; int modality; } saliencyObjects[1]; struct { unsigned char data[4480]; unsigned short width; unsigned short height; unsigned short rowBytes; unsigned char valid; } saliencyHeatMap; } _mostRecentDetectionResult;
    struct { struct { unsigned char numModels; char codeVersion[20]; char name[3][20]; char version[3][20]; unsigned char rsvd[32]; } modelInfo; unsigned int frameId; unsigned int numObjects; struct { unsigned int objectId; int category; struct { float x; float y; float width; float height; } bbox; unsigned int confidence; unsigned int yaw; unsigned int roll; int smile; int blinkLeft; int blinkRight; struct { float x; float y; float width; float height; } eyeRectLeft; struct { float x; float y; float width; float height; } eyeRectRight; unsigned char hasPoseData; unsigned char hasEyeData; unsigned char hasBlinkData; unsigned char hasSmileData; int modality; } objects[4]; } _mostRecentDetectionResultAsTrackingResult;
    struct { struct { unsigned char numModels; char codeVersion[20]; char name[3][20]; char version[3][20]; unsigned char rsvd[32]; } modelInfo; unsigned int frameId; unsigned int numObjects; struct { unsigned int objectId; int category; struct { float x; float y; float width; float height; } bbox; unsigned int confidence; unsigned int yaw; unsigned int roll; int smile; int blinkLeft; int blinkRight; struct { float x; float y; float width; float height; } eyeRectLeft; struct { float x; float y; float width; float height; } eyeRectRight; unsigned char hasPoseData; unsigned char hasEyeData; unsigned char hasBlinkData; unsigned char hasSmileData; int modality; } objects[4]; } _mostRecentTrackingResult;
    struct { float minOverlap; float boxSmoothingLr; float overlapBoxThreshold; unsigned int initNonmatchFrameCheckWindow; unsigned int initMaxNonmatchFrameCount; unsigned int maxNonmatchFrameCounts[3]; BOOL isDetUsedToReinit; } _associationParams;
    struct { unsigned int nextObjectId; unsigned int numObjects; struct { unsigned int objectId; unsigned int age; unsigned int unmatchedFrameCount; int killFlag; struct { unsigned int objectId; int category; struct { float x; float y; float width; float height; } bbox; unsigned int confidence; unsigned int yaw; unsigned int roll; int smile; int blinkLeft; int blinkRight; struct { float x; float y; float width; float height; } eyeRectLeft; struct { float x; float y; float width; float height; } eyeRectRight; unsigned char hasPoseData; unsigned char hasEyeData; unsigned char hasBlinkData; unsigned char hasSmileData; int modality; } object; } objects[4]; } _mostRecentAssociationResult;
}

+ (void)initialize;

- (void)terminate;
- (id)init;
- (void)dealloc;
- (id)processPixelBuffer:(struct __CVBuffer { } *)a0;
- (int)_detectObjectsInPixelBuffer:(struct __CVBuffer { } *)a0 usingContext:(id)a1 detectionPixelBuffer:(struct __CVBuffer { } *)a2 bgraInputPixelBuffer:(struct __CVBuffer { } *)a3;
- (void)_deactivateTrackingContext:(id)a0 forObjectIdentifier:(id)a1;
- (struct __CVBuffer { } *)newTrackingIntermediatePixelBufferFromPixelBuffer:(struct __CVBuffer { } *)a0 estimatedMeanColor:(void *)a1;
- (int)_initializeTrackingOfObject:(SEL)a0 inPixelBuffer:(struct { unsigned int x0; unsigned int x1; unsigned int x2; int x3; struct { unsigned int x0; int x1; struct { float x0; float x1; float x2; float x3; } x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; int x7; int x8; struct { float x0; float x1; float x2; float x3; } x9; struct { float x0; float x1; float x2; float x3; } x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; int x15; } x4; } *)a1 usingContext:(struct __CVBuffer { } *)a2 examplePixelBuffer:(id)a3 trackingPixelBuffer:(struct __CVBuffer { } *)a4 intermediatePixelBuffer:(struct __CVBuffer { } *)a5 estimatedMeanColor:(struct __CVBuffer { } *)a6 bgraInputPixelBuffer:(struct __CVBuffer { } *)a7;
- (void)_prepareContext:(id)a0 withExamplePixelBuffer:(struct __CVBuffer { } *)a1 trackingPixelBuffer:(struct __CVBuffer { } *)a2;
- (void)prepareWithInputPixelBufferAttributes:(id)a0;
- (struct __CVBuffer { } *)newInputPixelBufferFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (int)_continueTrackingObject:(SEL)a0 inPixelBuffer:(struct { unsigned int x0; unsigned int x1; unsigned int x2; int x3; struct { unsigned int x0; int x1; struct { float x0; float x1; float x2; float x3; } x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; int x7; int x8; struct { float x0; float x1; float x2; float x3; } x9; struct { float x0; float x1; float x2; float x3; } x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; int x15; } x4; } *)a1 usingContext:(struct __CVBuffer { } *)a2 examplePixelBuffer:(id)a3 trackingPixelBuffer:(struct __CVBuffer { } *)a4 intermediatePixelBuffer:(struct __CVBuffer { } *)a5 estimatedMeanColor:(struct __CVBuffer { } *)a6 bgraInputPixelBuffer:(struct __CVBuffer { } *)a7 result:(struct { struct { float x0; float x1; float x2; float x3; } x0; unsigned int x1; unsigned char x2; } *)a8;
- (void)_translateRegionOfInterest:(struct TtTrkCropRoi { float x0; float x1; float x2; float x3; } *)a0 inPixelBuffer:(struct __CVBuffer { } *)a1 toSourcePixelBuffer:(struct __CVBuffer { } *)a2 destinationPixelBuffer:(struct __CVBuffer { } *)a3 outSourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 outDestinationRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a5;

@end
