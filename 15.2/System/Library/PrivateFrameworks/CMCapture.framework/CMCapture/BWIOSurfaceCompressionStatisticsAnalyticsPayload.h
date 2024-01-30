@class NSString;

@interface BWIOSurfaceCompressionStatisticsAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) float averageRatio;
@property (nonatomic) float minRatio;
@property (nonatomic) float maxRatio;
@property (nonatomic) float standardDeviation;
@property (nonatomic) int compressionType;
@property (nonatomic) unsigned int bufferHeight;
@property (nonatomic) unsigned int numberOfSamples;
@property (nonatomic) unsigned long long totalCompressedSize;
@property (nonatomic) unsigned long long totalUncompressedSize;
@property (nonatomic) int nodeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventDictionary;
- (id)eventName;
- (void)reset;

@end
