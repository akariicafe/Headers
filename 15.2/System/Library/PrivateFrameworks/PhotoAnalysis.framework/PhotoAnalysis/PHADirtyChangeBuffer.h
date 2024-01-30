@class NSMutableDictionary;

@interface PHADirtyChangeBuffer : NSObject

@property (retain, nonatomic) NSMutableDictionary *workInfosByWorkerType;

- (void)recordChangeForAssetIdentifier:(id)a0 workerType:(int)a1 workerFlags:(int)a2;
- (id)snapshot;
- (void).cxx_destruct;
- (id)init;

@end
