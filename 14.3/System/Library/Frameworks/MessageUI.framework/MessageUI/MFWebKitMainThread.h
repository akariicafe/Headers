@class MFLock;

@interface MFWebKitMainThread : NSObject {
    struct __CFDictionary { } *_visibleDict;
    MFLock *_visibleDictLock;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (int)dictValueForMimeType:(id)a0;
- (void)_mainThreadPopulateDictForMimeType:(id)a0;

@end
