@class NSString, NSError, NSObject;
@protocol OS_dispatch_semaphore;

@interface WLVideosMigrator : NSObject <WLDataclassMigrating> {
    NSObject<OS_dispatch_semaphore> *_importSema;
    BOOL _didSaveVideo;
    NSError *_saveError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentType;

- (id)init;
- (void).cxx_destruct;
- (id)contentType;
- (id)dataType;
- (BOOL)accountBased;
- (void)importRecordData:(id)a0 summary:(id)a1 account:(id)a2 completion:(id /* block */)a3;
- (BOOL)storeRecordDataInDatabase;
- (BOOL)wantsSegmentedDownloads;

@end
