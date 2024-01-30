@interface PTTimedStabilizationMetadataVersion1 : PTTimedStabilizationMetadata {
    struct { void /* unknown type, empty encoding */ columns[3]; } _stabilizationHomography;
    void /* unknown type, empty encoding */ _estimatedMotionBlur;
}

@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[3]; } stabilizationHomography;
@property (readonly) BOOL hasStabilizationHomography;
@property (nonatomic) void /* unknown type, empty encoding */ estimatedMotionBlur;
@property (readonly) BOOL hasEstimatedMotionBlur;

- (id)initWithMinorVersion:(unsigned int)a0;
- (unsigned int)sizeOfSerializedObjectWithOptions:(id)a0;
- (BOOL)writeToData:(id)a0 withOptions:(id)a1;
- (id)initWithData:(id)a0 minorVersion:(unsigned int)a1;

@end
