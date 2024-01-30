@class NSDirectoryEnumerator, NSString;

@interface RMECacheEnumerator : NSObject {
    NSDirectoryEnumerator *_internalEnumerator;
    NSString *_volume;
}

+ (id)getLogPathsForSystemDiagnostic;
+ (id)getLogContainer:(BOOL)a0;
+ (id)getLogPathsSortedByTime;
+ (id)getEPLProfilePath;

- (id)initCacheEnumeratorWithVolume:(id)a0;
- (id)initCacheEnumerator;
- (id)nextValidURL;
- (void).cxx_destruct;

@end
