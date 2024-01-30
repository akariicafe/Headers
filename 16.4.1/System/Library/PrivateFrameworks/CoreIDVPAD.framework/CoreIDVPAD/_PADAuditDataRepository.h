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
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)storeClassifierResult:(id)a0 imageData:(id)a1 signature:(id)a2 flags:(id)a3;
- (void)storeUnencryptedVideoFrom:(id)a0;
- (void)_storeTAValues:(id)a0;
- (BOOL)_createDirIfNotExists:(id)a0;
- (id)_extractNestedTimestamps:(id)a0;
- (id)_extractTimestamps:(id)a0;
- (id)_generateDeviceInfoString;
- (void)_storeBuffer:(struct __CVBuffer { } *)a0 atURL:(id)a1;
- (void)_storeClassifierResult:(id)a0 imageData:(id)a1 signature:(id)a2 flags:(id)a3;
- (void)_storeFACPoseBuffer:(struct __CVBuffer { } *)a0 identifier:(id)a1 values:(id)a2;
- (void)_storePRDBuffer:(struct __CVBuffer { } *)a0 name:(id)a1;
- (void)_storeUnencryptedVideoFrom:(id)a0;
- (void)storeFACPoseBuffer:(struct __CVBuffer { } *)a0 identifier:(id)a1 values:(id)a2;
- (void)storePRDBuffer:(struct __CVBuffer { } *)a0 name:(id)a1;
- (void)storeTAValues:(id)a0;

@end
