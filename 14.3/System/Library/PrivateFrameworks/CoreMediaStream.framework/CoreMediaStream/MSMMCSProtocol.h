@class NSString;

@interface MSMMCSProtocol : NSObject <MSStorageProtocol> {
    NSString *_MMCSDirPath;
    NSString *_engineDirPath;
}

@property (readonly, nonatomic) NSString *personID;
@property (readonly, nonatomic) struct _mmcs_engine { } *engine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)computeItemIDForAsset:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)abort;
- (void)deactivate;
- (void)didFinishUsingAssets:(id)a0;
- (void)deactivateRemoveAllFiles:(BOOL)a0;
- (id)initWithPersonID:(id)a0 path:(id)a1;
- (int)_getFileDescriptorFromItem:(unsigned long long)a0;
- (id)_getUTIFromItem:(unsigned long long)a0;
- (void)_getItemDone:(unsigned long long)a0 path:(id)a1 error:(id)a2;
- (void)_putItemDone:(unsigned long long)a0 putReceipt:(id)a1 error:(id)a2;
- (void)_requestCompleted;

@end
