@class ARReferenceObject;

@interface ARObjectDetectionResult : NSObject

@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } visionTransform;
@property (retain, nonatomic) ARReferenceObject *referenceObject;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
