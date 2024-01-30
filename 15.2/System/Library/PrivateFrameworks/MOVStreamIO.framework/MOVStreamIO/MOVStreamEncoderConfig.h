@class NSDictionary;

@interface MOVStreamEncoderConfig : NSObject

@property unsigned int codecType;
@property (retain) NSDictionary *encoderSpecification;
@property (retain) NSDictionary *sessionProperties;

+ (BOOL)isEncoderAvailableOfType:(unsigned int)a0 withId:(id)a1;
+ (id)encoderIdsForType:(unsigned int)a0;
+ (id)monochrome10BitEncoderConfigUsingAVEWithBitrate:(unsigned long long)a0;

- (BOOL)writeToFile:(id)a0 error:(id *)a1;
- (id)initWithContentsOfFile:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithCodecType:(unsigned int)a0 encoderSpecification:(id)a1 sessionProperties:(id)a2;
- (BOOL)applySessionProperties:(struct OpaqueVTCompressionSession { } *)a0;

@end
