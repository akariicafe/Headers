@class NSNumber, NSString;

@interface SNDetectorHeadModelMetadata : NSObject <NSCopying>

@property (copy) NSNumber *sampleRate;
@property (copy) NSString *featureExtractorIdentifier;
@property (copy) NSNumber *windowSizeInSamples;
@property (copy) NSNumber *hopSizeInSamples;
@property (copy) NSString *soundIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
