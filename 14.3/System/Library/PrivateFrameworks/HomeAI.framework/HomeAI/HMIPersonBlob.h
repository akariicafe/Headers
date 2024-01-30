@class NSNumber, NSMutableSet, NSUUID;

@interface HMIPersonBlob : HMFObject

@property (readonly) struct CGSize { double width; double height; } frameDimensions;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } regionOfInterest;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } faceBoundingBox;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } personBoundingBox;
@property struct CGPoint { double x; double y; } position;
@property struct CGVector { double dx; double dy; } motionMean;
@property (retain) NSNumber *personIndex;
@property (retain) NSMutableSet *personIndices;
@property float personIouMax;
@property (readonly) NSUUID *blobID;

- (void).cxx_destruct;
- (BOOL)isLost;
- (BOOL)isMoving;
- (void)_computeBlobPropertiesWithBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 personBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 dx:(double)a2 dy:(double)a3 motionVectors:(id)a4 isDetection:(BOOL)a5;
- (double)boxDistanceToPersonBlob:(id)a0;
- (double)sizeDistanceToPersonBlob:(id)a0;
- (BOOL)isBijectiveToPersonBlob:(id)a0;
- (id)initWithPersonWithFaceEvent:(id)a0 motionVectors:(id)a1 personIndex:(int)a2 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 frameDimensions:(struct CGSize { double x0; double x1; })a4;
- (id)initWithPersonWithoutFaceEvent:(id)a0 personIndex:(int)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 frameDimensions:(struct CGSize { double x0; double x1; })a3;
- (id)initWithPersonBlob:(id)a0 motionVectors:(id)a1 personIndex:(int)a2 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 frameDimensions:(struct CGSize { double x0; double x1; })a4;
- (double)similarityToPersonBlob:(id)a0;
- (void)adjustFaceBoundingBoxFromPersonBlob:(id)a0;

@end
