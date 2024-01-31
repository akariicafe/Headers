@class PTCinematographyDetection;

@interface CNDetection : NSObject <NSCopying>

@property (readonly) PTCinematographyDetection *internalDetection;
@property (retain) PTCinematographyDetection *internalDetection;
@property unsigned long long creationHash;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) long long detectionType;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } normalizedRect;
@property (readonly) float focusDisparity;
@property (readonly) long long detectionID;
@property (readonly) long long detectionGroupID;

+ (id)accessibilityLabelForDetectionType:(long long)a0;
+ (id)_copyDetectionFromInternal:(id)a0;
+ (id)_copyDetectionsFromInternal:(id)a0;
+ (id)_copyInternalFromDetections:(id)a0;
+ (float)disparityInNormalizedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sourceDisparity:(struct __CVBuffer { } *)a1 detectionType:(long long)a2 priorDisparity:(float)a3;
+ (long long)invalidDetectionGroupID;
+ (long long)invalidDetectionID;
+ (BOOL)isValidDetectionGroupID:(long long)a0;
+ (BOOL)isValidDetectionID:(long long)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_integrityCheck;
- (id)_initCopyingInternalDetection:(id)a0;
- (id)_initTakingInternalDetection:(id)a0;
- (id)initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 detectionType:(long long)a1 normalizedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 focusDisparity:(float)a3;

@end
