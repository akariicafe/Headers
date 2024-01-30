@class UASharedPasteboardManager;

@interface UASharedPasteboard : NSObject

@property UASharedPasteboardManager *manager;

+ (void)initialize;
+ (void)clearLocalPasteboardInformation;
+ (void)startPreventingPasteboardSharing;
+ (void)stopPreventingPasteboardSharing;
+ (void)localPasteboardDidAddData:(id)a0 toItemAtIndex:(unsigned long long)a1 generation:(unsigned long long)a2;
+ (void)localPasteboardDidAddItems:(id)a0 forGeneration:(unsigned long long)a1;
+ (id)remotePasteboard;
+ (void)localPasteboardDidPasteGeneration:(unsigned long long)a0;

- (id)currentRemoteDeviceName;
- (void)requestRemotePasteboardTypesForProcess:(int)a0 withCompletion:(id /* block */)a1;
- (void)requestRemotePasteboardDataForProcess:(int)a0 withCompletion:(id /* block */)a1;
- (void)prefetchRemotePasteboardTypes:(id)a0;
- (BOOL)returnPasteboardDataBeforeArchives;

@end
