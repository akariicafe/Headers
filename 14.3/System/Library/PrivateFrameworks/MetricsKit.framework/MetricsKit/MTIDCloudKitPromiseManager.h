@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MTIDCloudKitPromiseManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *dict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

- (void).cxx_destruct;
- (id)initWithCallbackQueue:(id)a0;
- (id)waitForRecordToSync:(id)a0 timeout:(double)a1;
- (void)finishPromisesOfRecord:(id)a0;

@end
