@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioTimeConverter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long anchorSampleCount;
@property (nonatomic) unsigned long long anchorHostTime;

- (unsigned long long)sampleCountFromHostTime:(unsigned long long)a0;
- (id)init;
- (unsigned long long)hostTimeFromSampleCount:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)processSampleCount:(unsigned long long)a0 hostTime:(unsigned long long)a1;

@end
