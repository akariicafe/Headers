@class NSObject;
@protocol _UIHyperExtender, _UIHyperregion;

@interface _UIHyperInteractor : NSObject {
    double *__unconstrainedPoint;
    double *__translatedUnconstrainedPoint;
    double *__velocity;
    double *__projectedPoint;
    double *__closestPoint;
    BOOL __boundaryCrossedByLastTranslation;
    BOOL __rubberBanding;
    double *__unconstrainedVector;
    double *__extentVector;
    double __extent;
    double *__unconstrainedExtentVector;
    double __unconstrainedExtent;
    double __constrainedFraction;
    double *__constrainedPoint;
    double *__constrainedVelocity;
    struct { unsigned char translatedUnconstrainedPoint : 1; unsigned char projectedPoint : 1; unsigned char closestPoint : 1; unsigned char boundaryCrossedByLastTranslation : 1; unsigned char rubberBanding : 1; unsigned char unconstrainedVector : 1; unsigned char extentVector : 1; unsigned char extent : 1; unsigned char unconstrainedExtentVector : 1; unsigned char unconstrainedExtent : 1; unsigned char constrainedFraction : 1; unsigned char constrainedPoint : 1; unsigned char constrainedVelocity : 1; } _clean;
}

@property (readonly, nonatomic) double *_lastTranslatedUnconstrainedPoint;
@property (readonly, nonatomic) const double *_unconstrainedVector;
@property (readonly, nonatomic) const double *_unconstrainedExtentVector;
@property (readonly, nonatomic) double _constrainedFraction;
@property (readonly, nonatomic) const double *_extentVector;
@property (readonly, nonatomic) double _unconstrainedExtent;
@property (readonly, nonatomic) double _extent;
@property (readonly, nonatomic) unsigned long long _dimensions;
@property (retain, nonatomic, setter=_setRegion:) NSObject<_UIHyperregion> *_region;
@property (retain, nonatomic, setter=_setExtender:) NSObject<_UIHyperExtender> *_extender;
@property (nonatomic, setter=_setDecelerationRate:) double _decelerationRate;
@property (nonatomic, setter=_setRubberBandCoefficient:) double _rubberBandCoefficient;
@property (readonly, nonatomic) const double *_unconstrainedPoint;
@property (readonly, nonatomic) double *_translation;
@property (readonly, nonatomic) const double *_velocity;
@property (readonly, nonatomic) const double *_translatedUnconstrainedPoint;
@property (readonly, nonatomic) const double *_projectedPoint;
@property (readonly, nonatomic) const double *_closestPoint;
@property (readonly, nonatomic, getter=_isBoundaryCrossedByLastTranslation) BOOL _boundaryCrossedByLastTranslation;
@property (readonly, nonatomic, getter=_isRubberBanding) BOOL _rubberBanding;
@property (readonly, nonatomic) const double *_constrainedPoint;
@property (readonly, nonatomic) const double *_constrainedVelocity;

- (id)initWithDimensions:(unsigned long long)a0;
- (void)_unconstrainedPoint:(double *)a0 forConstrainedPoint:(const double *)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_copyTranslation:(const double *)a0;
- (id)description;
- (void)_mutateVelocity:(id /* block */)a0;
- (void)_mutateUnconstrainedPoint:(id /* block */)a0;
- (void)_commitTranslation;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_mutateTranslation:(id /* block */)a0;
- (void)_copyUnconstrainedPoint:(const double *)a0;
- (void)_copyVelocity:(const double *)a0;

@end
