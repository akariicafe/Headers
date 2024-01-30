@class NSMutableDictionary;

@interface PHADirtyChangeBuffer : NSObject

@property (retain, nonatomic) NSMutableDictionary *workInfosByWorkerType;

- (id)init;
- (void).cxx_destruct;
- (id)snapshot;
- (void)recordChangeForAssetIdentifier:(id)a0 workerType:(int)a1 workerFlags:(int)a2;

@end
