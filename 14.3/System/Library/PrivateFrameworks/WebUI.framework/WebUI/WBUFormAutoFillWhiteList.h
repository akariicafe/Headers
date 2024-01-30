@class NSCache;

@interface WBUFormAutoFillWhiteList : NSObject {
    NSCache *_cache;
}

+ (id)sharedAutoFillWhiteList;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)allowsURL:(id)a0;
- (void)_whiteListSettingsChanged:(id)a0;

@end
