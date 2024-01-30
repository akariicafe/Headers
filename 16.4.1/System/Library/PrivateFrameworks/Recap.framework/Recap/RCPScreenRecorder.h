@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface RCPScreenRecorder : NSObject {
    NSMutableArray *_snapshots;
    BOOL _recording;
    NSObject<OS_dispatch_queue> *_snapshotQueue;
}

@property (nonatomic) double maxDuration;
@property (readonly, nonatomic, getter=isRecording) BOOL recording;
@property (readonly, nonatomic) NSArray *snapshots;

+ (id)takeScreenshot;
+ (id)takeScreenshot:(double)a0;

- (void)stopRecording;
- (void)startRecording;
- (void)snapshot;
- (void).cxx_destruct;

@end
