@class NSString, NSNumber, NSDictionary;

@interface PTCinematographyDetection : NSObject <PTSerialization, PTArraySerialization, NSCopying, NSMutableCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSNumber *trackNumber;
@property (readonly, nonatomic) BOOL isAutoFocusDetection;
@property (readonly, nonatomic) BOOL isFixedFocusDetection;
@property (readonly, nonatomic) BOOL isCustomDetection;
@property (nonatomic, getter=_isInvalid, setter=_setInvalid:) BOOL _invalid;
@property (nonatomic, getter=_isExcludedAsCinematicChoice, setter=_setExcludedAsCinematicChoice:) BOOL _excludedAsCinematicChoice;
@property (retain, nonatomic) NSDictionary *_namedSignals;
@property (retain, nonatomic) NSNumber *trackNumber;
@property (retain, nonatomic) NSString *cachedFocusIdentifier;
@property (nonatomic) BOOL cachedFocusIdentifierWasSetByClient;
@property (nonatomic, getter=_isExcludedAsCinematicChoice, setter=_setExcludedAsCinematicChoice:) BOOL _excludedAsCinematicChoice;
@property (retain, nonatomic) NSDictionary *_namedSignals;
@property (nonatomic) unsigned long long detectionType;
@property (nonatomic) long long trackIdentifier;
@property (nonatomic) long long groupIdentifier;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (nonatomic) float focusDistance;
@property (readonly, nonatomic) NSString *accessibilityLabel;

+ (void)initialize;
+ (id)accessibilityLabelForDetectionType:(unsigned long long)a0;
+ (id)_detectionsFromInnerAtomStream:(id)a0;
+ (id)_cinematographyArrayFromDetections:(id)a0;
+ (unsigned long long)_detectionTypeForPrefix:(id)a0;
+ (id)_detectionsByFocusIdentifierFromArray:(id)a0;
+ (id)_detectionsByTrackIdentifierFromArray:(id)a0;
+ (id)_detectionsFromCinematographyArray:(id)a0;
+ (id)_prefixForDetectionType:(unsigned long long)a0;
+ (id)objectFromAtomStream:(id)a0;
+ (id)objectsFromAtomStream:(id)a0;
+ (void)registerForSerialization;
+ (unsigned long long)sizeOfSerializedArray:(id)a0 options:(id)a1;
+ (BOOL)writeArray:(id)a0 toAtomWriter:(id)a1 options:(id)a2;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isEqual:(id)a0;
- (unsigned long long)sizeOfSerializedObjectWithOptions:(id)a0;
- (id)initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 focusDistance:(float)a2;
- (BOOL)supportsVersion:(unsigned long long)a0;
- (id)focusIdentifier;
- (id)_asCinematographyDictionary;
- (void)_clearCachedFocusIdentifier;
- (BOOL)_copyToDetectionData_0:(struct DetectionData_0 { unsigned long long x0; unsigned long long x1; unsigned int x2; float x3; float x4[4]; } *)a0;
- (id)_detectionByChangingTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)_fixMissingTrackIdentifier:(long long)a0;
- (id)_initWithCinematographyDictionary:(id)a0;
- (id)_initWithDetectionData_0:(struct DetectionData_0 { unsigned long long x0; unsigned long long x1; unsigned int x2; float x3; float x4[4]; } *)a0;
- (void)_restoreOriginal;
- (void)setFocusIdentifier:(id)a0;
- (BOOL)writeToAtomWriter:(id)a0 options:(id)a1;

@end
