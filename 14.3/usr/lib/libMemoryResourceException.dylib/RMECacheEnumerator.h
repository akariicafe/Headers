@class NSDirectoryEnumerator, NSString;

@interface RMECacheEnumerator : NSObject

@property (copy, nonatomic) NSDirectoryEnumerator *internalEnumerator;
@property (retain, nonatomic) NSString *volume;

+ (id)getLogContainer:(BOOL)a0;
+ (id)getLogPathsSortedByTime;
+ (id)getLogPathsForSystemDiagnostic;
+ (id)getEPLProfilePath;

- (void).cxx_destruct;
- (id)initCacheEnumeratorWithVolume:(id)a0;
- (id)initCacheEnumerator;
- (id)nextValidURL;

@end
