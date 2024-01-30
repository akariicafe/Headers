@class NSArray;

@interface VNRecognizedHandPointsSpecifier : VNRecognizedPointsSpecifier {
    NSArray *_orderedHandKeypoints;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)availableGroupKeys;
- (id)pointKeyGroupLabelsMapping;
- (id)populatedMLMultiArrayAndReturnError:(id *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithVCPHandObservation:(id)a0 requestRevision:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
