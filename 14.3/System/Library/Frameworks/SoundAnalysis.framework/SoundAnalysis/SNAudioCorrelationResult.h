@class NSDictionary, NSString;

@interface SNAudioCorrelationResult : NSObject <SNTimeConversionDictionaryProviding, SNTimeRangeProvidingWritable, SNTimeRangeProviding>

@property (nonatomic) double peakValue;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } peakTime;
@property (nonatomic) long long channelIndex;
@property (readonly) NSDictionary *timeConversionDictionary;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
