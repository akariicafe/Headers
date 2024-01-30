@class NSString, NSMutableArray;

@interface DDScannerList : NSObject {
    BOOL _spotlightSuggestionsEnabled;
    int _type;
    NSString *_hash;
    NSMutableArray *_waitQueue;
    NSMutableArray *_scannerCache;
    NSMutableArray *_activeScanners;
}

- (unsigned long long)totalCount;
- (unsigned long long)busyCount;
- (BOOL)cancelJob:(long long)a0;
- (id)getCachedScanner;
- (id)initWithConfiguration:(id)a0;
- (void)activateScanner:(id)a0;
- (void).cxx_destruct;
- (id)scannerCreate;
- (id)dequeueJob;
- (void)enqueueJob:(id /* block */)a0 withIdentifier:(long long)a1;
- (void)pushBackScanner:(id)a0;

@end
