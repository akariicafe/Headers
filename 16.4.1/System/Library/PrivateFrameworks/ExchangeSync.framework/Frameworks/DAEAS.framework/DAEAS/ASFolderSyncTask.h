@class NSString;

@interface ASFolderSyncTask : ASTask {
    NSString *_previousSyncKey;
    int _numDownloadedElements;
    BOOL _isSpinning;
}

@property (nonatomic) BOOL requireChangedFolders;
@property (nonatomic) long long dataclasses;

- (id)requestBody;
- (void)finishWithError:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (int)numDownloadedElements;
- (void)_setSpinning:(BOOL)a0;
- (BOOL)processContext:(id)a0;
- (int)commandCode;
- (BOOL)getTopLevelToken:(char *)a0 outStatusCodePage:(char *)a1 outStatusToken:(char *)a2;
- (id)initWithPreviousSyncKey:(id)a0;
- (long long)taskStatusForExchangeStatus:(int)a0;

@end
