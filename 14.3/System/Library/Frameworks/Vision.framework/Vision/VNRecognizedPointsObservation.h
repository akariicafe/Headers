@class NSNumber, NSArray, VNRecognizedPointsSpecifier;

@interface VNRecognizedPointsObservation : VNObservation {
    VNRecognizedPointsSpecifier *_specifier;
}

@property (readonly) NSNumber *groupIdentifier;
@property (readonly, copy) NSArray *availableKeys;
@property (readonly, copy) NSArray *availableGroupKeys;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithRequestRevision:(unsigned long long)a0 keypointReturningObservation:(id)a1;
- (id)recognizedPointsForGroupKey:(id)a0 error:(id *)a1;
- (id)recognizedPointForKey:(id)a0 error:(id *)a1;
- (id)keypointsMultiArrayAndReturnError:(id *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
