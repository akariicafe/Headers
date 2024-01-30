@class NSDictionary, VNRequestSpecifier;

@interface VNRecognizedPointsSpecifier : NSObject <NSSecureCoding, NSCopying> {
    VNRequestSpecifier *_originatingRequestSpecifier;
    NSDictionary *_allRecognizedPoints;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)availableKeys;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)availableGroupKeys;
- (id)pointKeyGroupLabelsMapping;
- (id)populatedMLMultiArrayAndReturnError:(id *)a0;
- (id)recognizedPointsForGroupKey:(id)a0 error:(id *)a1;
- (id)recognizedPointForKey:(id)a0 error:(id *)a1;
- (id)originatingRequestSpecifier;
- (id)initWithOriginatingRequestSpecifier:(id)a0 allRecognizedPoints:(id)a1;

@end
