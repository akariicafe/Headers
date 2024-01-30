@class VNMPImageDescriptor;

@interface VNImageprint : NSObject <VNSerializingInternal, NSCopying, NSSecureCoding, VNSerializing, VNRequestRevisionProviding> {
    unsigned long long _requestRevision;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) VNMPImageDescriptor *descriptor;
@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long serializedLength;
@property (readonly, nonatomic) unsigned long long requestRevision;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithState:(id)a0 error:(id *)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)distanceToImageprint:(id)a0 error:(id *)a1;
- (id)initWithImageDescriptor:(id)a0 type:(unsigned long long)a1 requestRevision:(unsigned long long)a2;
- (BOOL)isEqual:(id)a0;
- (id)initWithState:(id)a0 byteOffset:(unsigned long long *)a1 error:(id *)a2;
- (unsigned long long)serializeStateIntoData:(id)a0 startingAtByteOffset:(unsigned long long)a1 error:(id *)a2;
- (id)serializeStateAndReturnError:(id *)a0;
- (void)encodeWithCoder:(id)a0;

@end
