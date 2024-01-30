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
- (void).cxx_destruct;
- (void)dealloc;
- (void)_setSpinning:(BOOL)a0;
- (int)numDownloadedElements;
- (long long)taskStatusForExchangeStatus:(int)a0;
- (int)commandCode;
- (BOOL)getTopLevelToken:(char *)a0 outStatusCodePage:(char *)a1 outStatusToken:(char *)a2;
- (BOOL)processContext:(id)a0;
- (id)initWithPreviousSyncKey:(id)a0;

@end
