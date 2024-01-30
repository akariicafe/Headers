@class NSDictionary;

@interface AVVCPrepareRecordSettings : NSObject

@property (nonatomic) unsigned long long streamID;
@property (retain, nonatomic) NSDictionary *avAudioSettings;
@property (nonatomic) double recordBufferDuration;
@property (nonatomic) BOOL meteringEnabled;

- (void)dealloc;
- (id)initWithStreamID:(unsigned long long)a0 settings:(id)a1 bufferDuration:(double)a2;

@end
