@class NSArray, NSDictionary;

@interface ARFaceData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *detectedFaces;
@property (retain, nonatomic) NSDictionary *faceMeshPayload;
@property (nonatomic, getter=isMirrored) BOOL mirrored;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMetadataObjects:(id)a0 mirroredVideoInput:(BOOL)a1 stripDetectionData:(BOOL)a2;

@end
