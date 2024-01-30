@class NSArray;

@interface VNRecognizedBodyPointsSpecifier : VNRecognizedPointsSpecifier {
    NSArray *_orderedPersonKeypoints;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithVCPPersonObservation:(id)a0 requestRevision:(unsigned long long)a1;
- (id)availableGroupKeys;
- (id)pointKeyGroupLabelsMapping;
- (id)populatedMLMultiArrayAndReturnError:(id *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
