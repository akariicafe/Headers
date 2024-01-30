@class NSString;

@interface BWIOSurfaceCompressionHistogramAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    unsigned long long _lumaCompressionHistogram[16];
    unsigned long long _chromaCompressionHistogram[16];
}

@property (retain, nonatomic) NSString *portType;
@property (nonatomic) unsigned int bufferHeight;
@property (nonatomic) int nodeType;
@property (nonatomic) BOOL pixelFormatIsTenBit;
@property (nonatomic) unsigned int numberOfSamples;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventDictionary;
- (id)eventName;
- (void)dealloc;
- (void)reset;
- (void)setLumaCompressionHistogram:(unsigned long long[16])a0;
- (void)setChromaCompressionHistogram:(unsigned long long[16])a0;

@end
