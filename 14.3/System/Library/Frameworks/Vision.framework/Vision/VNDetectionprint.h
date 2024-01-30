@class NSDictionary;

@interface VNDetectionprint : NSObject <NSCopying, NSSecureCoding, VNRequestRevisionProviding> {
    NSDictionary *_tensorsDictionary;
    unsigned long long _requestRevision;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long requestRevision;

+ (id)knownTensorKeysForRequestRevision:(unsigned long long)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)tensorForKey:(id)a0 error:(id *)a1;
- (id)initWithTensorsDictionary:(id)a0 requestRevision:(unsigned long long)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
