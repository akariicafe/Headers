@class NSMutableArray;
@protocol SFBLERecorderReplayDelegate;

@interface SFBLERecorder : NSObject {
    NSMutableArray *_recordings;
    unsigned long long _replayIndex;
}

@property (readonly, nonatomic) long long payloadType;
@property (weak, nonatomic) id<SFBLERecorderReplayDelegate> replayDelegate;

- (void).cxx_destruct;
- (BOOL)saveToDirectory:(id)a0;
- (id)initWithPayloadType:(long long)a0;
- (id)initWithRecordingURL:(id)a0;
- (BOOL)recordDevice:(id)a0 data:(id)a1 rssi:(id)a2 info:(id)a3 error:(id *)a4;
- (BOOL)replayNextRecording;

@end
