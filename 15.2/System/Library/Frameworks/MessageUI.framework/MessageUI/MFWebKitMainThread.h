@class MFLock;

@interface MFWebKitMainThread : NSObject {
    struct __CFDictionary { } *_visibleDict;
    MFLock *_visibleDictLock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (int)dictValueForMimeType:(id)a0;
- (void)_mainThreadPopulateDictForMimeType:(id)a0;

@end
