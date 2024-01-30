@class NSDirectoryEnumerator, NSString;

@interface RMECacheEnumerator : NSObject {
    NSDirectoryEnumerator *_internalEnumerator;
    NSString *_volume;
}

+ (id)getEPLProfilePath;
+ (id)getLogContainer:(BOOL)a0;
+ (id)getLogPathsForSystemDiagnostic;
+ (id)getLogPathsSortedByProcessFrequency;
+ (id)getLogPathsSortedByTime;

- (id)initCacheEnumerator;
- (id)initCacheEnumeratorWithVolume:(id)a0;
- (id)nextValidURL;
- (void).cxx_destruct;

@end
