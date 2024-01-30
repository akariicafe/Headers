@class NSDictionary;

@interface MOVStreamEncoderConfig : NSObject

@property unsigned int codecType;
@property (retain) NSDictionary *encoderSpecification;
@property (retain) NSDictionary *sessionProperties;
@property (readonly) NSDictionary *dictionaryRepresentation;

+ (id)encoderIdsForType:(unsigned int)a0;
+ (BOOL)isEncoderAvailableOfType:(unsigned int)a0 withId:(id)a1;
+ (id)monochrome10BitEncoderConfigUsingAVEWithBitrate:(unsigned long long)a0;
+ (id)monochrome10BitEncoderConfigUsingAVEWithQuality:(double)a0;
+ (id)supportedProfileLevelsForHEVC;

- (id)initWithDictionary:(id)a0;
- (id)initWithContentsOfFile:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)writeToFile:(id)a0 error:(id *)a1;
- (void)enableAVEHighPerformanceProfile;
- (BOOL)applySessionProperties:(struct OpaqueVTCompressionSession { } *)a0;
- (id)initWithCodecType:(unsigned int)a0 encoderSpecification:(id)a1 sessionProperties:(id)a2;

@end
