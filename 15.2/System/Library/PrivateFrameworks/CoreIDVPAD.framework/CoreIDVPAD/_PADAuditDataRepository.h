@class NSString, NSMutableDictionary, NSURL, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface _PADAuditDataRepository : NSObject <PADAuditDataRepository> {
    NSMutableDictionary *_facPoseValues;
    NSMutableArray *_taValues;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSURL *_dir;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_finalize;
- (void)_setup;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_storeClassifierResult:(id)a0 imageData:(id)a1 signature:(id)a2 flags:(id)a3;
- (void)_storeUnencryptedVideoFrom:(id)a0;
- (void)_storePRDBuffer:(struct __CVBuffer { } *)a0 name:(id)a1;
- (void)_storeFACPoseBuffer:(struct __CVBuffer { } *)a0 identifier:(id)a1 values:(id)a2;
- (void)_storeTAValues:(id)a0;
- (id)_extractNestedTimestamps:(id)a0;
- (id)_extractTimestamps:(id)a0;
- (BOOL)_createDirIfNotExists:(id)a0;
- (void)_storeBuffer:(struct __CVBuffer { } *)a0 atURL:(id)a1;
- (void)storeClassifierResult:(id)a0 imageData:(id)a1 signature:(id)a2 flags:(id)a3;
- (void)storePRDBuffer:(struct __CVBuffer { } *)a0 name:(id)a1;
- (void)storeFACPoseBuffer:(struct __CVBuffer { } *)a0 identifier:(id)a1 values:(id)a2;
- (void)storeTAValues:(id)a0;
- (void)storeUnencryptedVideoFrom:(id)a0;

@end
