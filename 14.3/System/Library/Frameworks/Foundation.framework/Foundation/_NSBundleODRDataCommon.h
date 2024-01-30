@class NSLock, NSMutableDictionary, NSBundle;

@interface _NSBundleODRDataCommon : NSObject {
    NSMutableDictionary *_assetPackToURL;
    NSLock *_lock;
    NSBundle *_bundle;
    long long _sandboxToken;
}

- (BOOL)assetPacksBecameUnavailable:(id)a0 error:(id *)a1;
- (void)dealloc;
- (BOOL)assetPacksBecameAvailable:(id)a0 error:(id *)a1;
- (id)initWithBundle:(id)a0;

@end
