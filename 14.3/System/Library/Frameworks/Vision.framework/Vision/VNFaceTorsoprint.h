@class VNTorsoprint, VNFaceprint;

@interface VNFaceTorsoprint : VNEspressoModelImageprint

@property (readonly, nonatomic) VNFaceprint *faceprint;
@property (readonly, nonatomic) VNTorsoprint *torsoprint;
@property (readonly, nonatomic, getter=isValidTorsoprint) BOOL validTorsoprint;

+ (BOOL)supportsSecureCoding;
+ (unsigned int)currentCodingVersion;
+ (id)codingTypesToCodingKeys;
+ (unsigned long long)currentSerializationVersion;
+ (id)currentVersion;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(const void *)a0 elementCount:(unsigned long long)a1 elementType:(unsigned long long)a2 lengthInBytes:(unsigned long long)a3 labelsAndConfidence:(id)a4 requestRevision:(unsigned long long)a5;
- (id)initWithData:(const void *)a0 elementCount:(unsigned long long)a1 elementType:(unsigned long long)a2 lengthInBytes:(unsigned long long)a3 labelsAndConfidence:(id)a4 validTorsoprint:(BOOL)a5 requestRevision:(unsigned long long)a6;
- (id)initWithFaceprint:(id)a0 torsoPrint:(id)a1 requestRevision:(unsigned long long)a2;
- (id)initWithState:(id)a0 byteOffset:(unsigned long long *)a1 error:(id *)a2;
- (unsigned long long)serializeStateIntoData:(id)a0 startingAtByteOffset:(unsigned long long)a1 error:(id *)a2;
- (unsigned long long)serializedLength;
- (id)computeDistance:(id)a0 withDistanceFunction:(unsigned long long)a1 error:(id *)a2;
- (id)serializeStateAndReturnError:(id *)a0;
- (void)encodeWithCoder:(id)a0;

@end
