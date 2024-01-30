@class NSDictionary;

@interface VNRecognizedPointsSpecifier : NSObject <NSSecureCoding, NSCopying, VNRequestRevisionProviding> {
    unsigned long long _requestRevision;
    NSDictionary *_allRecognizedPoints;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long requestRevision;

- (void).cxx_destruct;
- (id)recognizedPointsForGroupKey:(id)a0 error:(id *)a1;
- (id)recognizedPointForKey:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)availableKeys;
- (id)availableGroupKeys;
- (id)pointKeyGroupLabelsMapping;
- (id)populatedMLMultiArrayAndReturnError:(id *)a0;
- (id)initWithRequestRevision:(unsigned long long)a0 allRecognizedPoints:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
