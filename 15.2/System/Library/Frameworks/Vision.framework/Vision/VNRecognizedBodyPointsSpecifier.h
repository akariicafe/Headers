@class NSArray;

@interface VNRecognizedBodyPointsSpecifier : VNRecognizedPointsSpecifier {
    NSArray *_orderedPersonKeypoints;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithVCPPersonObservation:(id)a0 originatingRequestSpecifier:(id)a1;
- (id)availableGroupKeys;
- (id)pointKeyGroupLabelsMapping;
- (id)populatedMLMultiArrayAndReturnError:(id *)a0;

@end
