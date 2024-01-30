@class NSDictionary, NSString;

@interface SNAudioCorrelationResult : NSObject <SNTimeConversionDictionaryProviding, SNTimeRangeProvidingWritable, SNTimeRangeProviding> {
    double _peakValue;
    long long _channelIndex;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _peakTime;
}

@property (readonly, nonatomic) double peakValue;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } peakTime;
@property (readonly, nonatomic) long long channelIndex;
@property (readonly) NSDictionary *timeConversionDictionary;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
