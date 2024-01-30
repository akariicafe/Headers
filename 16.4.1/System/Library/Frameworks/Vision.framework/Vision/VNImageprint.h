@class VNMPImageDescriptor, VNRequestSpecifier, NSString;

@interface VNImageprint : NSObject <VNSerializingInternal, VNOriginatingRequestSpecifierProviding, NSCopying, NSSecureCoding, VNSerializing, VNRequestSpecifying> {
    VNRequestSpecifier *_originatingRequestSpecifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) VNMPImageDescriptor *descriptor;
@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long serializedLength;
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;
@property (readonly, nonatomic) unsigned long long requestRevision;
@property (readonly, copy) NSString *requestClassName;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithState:(id)a0 error:(id *)a1;
- (Class)requestClassAndReturnError:(id *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)serializeStateAndReturnError:(id *)a0;
- (id)initWithState:(id)a0 byteOffset:(unsigned long long *)a1 error:(id *)a2;
- (id)distanceToImageprint:(id)a0 error:(id *)a1;
- (id)initWithImageDescriptor:(id)a0 type:(unsigned long long)a1 originatingRequestSpecifier:(id)a2;
- (unsigned long long)serializeStateIntoData:(id)a0 startingAtByteOffset:(unsigned long long)a1 error:(id *)a2;

@end
