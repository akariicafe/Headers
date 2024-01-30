@class NSString, NSArray, NSData;

@interface GSStagingPrefix : NSObject {
    unsigned char _volumeUUID[16];
    int _deviceID;
    NSString *_path;
    NSArray *_pathComponents;
    NSData *_extension;
    long long _sandboxHandle;
}

- (void)finalize;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (void)_invalidate:(BOOL)a0;
- (void)_connectionWithDaemonWasLost;
- (BOOL)_refreshWithError:(id *)a0;
- (id)initWithDocumentID:(id)a0;
- (id)stagingPathforCreatingAdditionWithError:(id *)a0;
- (BOOL)isStagedPath:(id)a0;
- (void)cleanupStagingPath:(id)a0;

@end
