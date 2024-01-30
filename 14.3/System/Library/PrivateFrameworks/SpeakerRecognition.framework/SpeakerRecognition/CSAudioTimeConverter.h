@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioTimeConverter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long anchorSampleCount;
@property (nonatomic) unsigned long long anchorHostTime;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)sampleCountFromHostTime:(unsigned long long)a0;
- (unsigned long long)hostTimeFromSampleCount:(unsigned long long)a0;
- (void)processSampleCount:(unsigned long long)a0 hostTime:(unsigned long long)a1;

@end
