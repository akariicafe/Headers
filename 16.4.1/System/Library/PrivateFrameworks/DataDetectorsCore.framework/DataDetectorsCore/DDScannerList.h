@class NSString, NSMutableArray;

@interface DDScannerList : NSObject {
    BOOL _spotlightSuggestionsEnabled;
    int _type;
    NSString *_hash;
    NSMutableArray *_waitQueue;
    NSMutableArray *_scannerCache;
    NSMutableArray *_activeScanners;
}

- (BOOL)cancelJob:(long long)a0;
- (void)pushBackScanner:(id)a0;
- (id)dequeueJob;
- (unsigned long long)totalCount;
- (void)enqueueJob:(id /* block */)a0 withIdentifier:(long long)a1;
- (void)activateScanner:(id)a0;
- (id)getCachedScanner;
- (id)scannerCreate;
- (unsigned long long)busyCount;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;

@end
