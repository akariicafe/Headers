@class CMDeviceMotion;
@protocol CAMPreviewAlignmentModelObserver;

@interface CAMPreviewAlignmentModel : NSObject

@property (class, readonly, nonatomic) double desiredUpdateInterval;

@property (nonatomic, setter=_setAlignmentTransform:) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } alignmentTransform;
@property (nonatomic, getter=isAligned, setter=_setAligned:) BOOL aligned;
@property (nonatomic, setter=_setOpacity:) double opacity;
@property (retain, nonatomic, setter=_setReferenceDeviceMotion:) CMDeviceMotion *_referenceDeviceMotion;
@property (weak, nonatomic) id<CAMPreviewAlignmentModelObserver> observer;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)applyDeviceMotion:(id)a0;

@end
