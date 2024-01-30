@class NSString, NSArray, NSNumber, NSObject;
@protocol OS_os_log;

@interface AppleFirmwareUpdateController : NSObject {
    NSObject<OS_os_log> *_log;
}

@property (retain, nonatomic) NSString *fwAssetFile;
@property (retain, nonatomic) NSString *fwAssetSignatureType;
@property (retain, nonatomic) NSNumber *fwAssetVersion;
@property (retain, nonatomic) NSNumber *fwAssetSize;
@property (retain, nonatomic) NSNumber *img4Tag;
@property (retain, nonatomic) NSArray *fdrClasses;
@property (retain, nonatomic) NSNumber *registryEntryID;
@property (retain, nonatomic) NSString *fwAssetDirectory;

- (id)init;
- (void).cxx_destruct;
- (unsigned int)getServiceForRegistryID:(long long *)a0;
- (id)findFWAssetFromTag:(id)a0 tag:(unsigned int)a1 size:(unsigned long long *)a2;
- (BOOL)isFWDownloadNeeded:(id)a0;
- (unsigned int)getConnectionForRegistryID:(long long *)a0;
- (long long)sendFDRData:(unsigned int)a0;
- (BOOL)getEarlyBootList:(id)a0;
- (BOOL)createFWAssetInfo;
- (id)updateFirmwareWithOptions:(id)a0;

@end
