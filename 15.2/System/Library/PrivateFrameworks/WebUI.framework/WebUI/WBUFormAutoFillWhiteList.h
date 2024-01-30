@class NSCache;

@interface WBUFormAutoFillWhiteList : NSObject {
    NSCache *_cache;
}

+ (id)sharedAutoFillWhiteList;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)allowsURL:(id)a0;
- (void)_whiteListSettingsChanged:(id)a0;

@end
