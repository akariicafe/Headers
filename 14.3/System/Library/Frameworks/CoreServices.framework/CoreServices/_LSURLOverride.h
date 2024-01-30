@class NSURL;

@interface _LSURLOverride : NSObject

@property (readonly, nonatomic) NSURL *originalURL;
@property (readonly, copy, nonatomic) NSURL *overrideURL;

+ (id)fmipURL:(struct State { id x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } *)a0;
+ (id)fmfURL:(struct State { id x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } *)a0;
+ (id)bizURL:(struct State { id x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } *)a0;
+ (id)photosURL:(struct State { id x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } *)a0;
+ (id)iTunesStoreURL:(struct State { id x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } *)a0;
+ (id)keynoteLiveURL:(struct State { id x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } *)a0;
+ (id)iCloudFamilyURL:(struct State { id x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } *)a0;
+ (id)iCloudEmailPrefsURL:(struct State { id x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } *)a0;
+ (id)iCloudSharingURL_noFragment:(struct State { id x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } *)a0;
+ (void)removeAllOverrideBlocks;
+ (id)iCloudSchoolworkURL:(struct State { id x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } *)a0;
+ (void)setUseMacOverrides:(BOOL)a0;
+ (void)addOverrideBlock:(id /* block */)a0;
+ (void)resetPlatformFlag;
+ (id)iCloudSharingURL:(struct State { id x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } *)a0;
+ (id)keynoteLiveURL_noFragment:(struct State { id x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } *)a0;
+ (id)new;

- (id)initWithOriginalURL:(id)a0 checkingForAvailableApplications:(BOOL)a1;
- (id)initWithOriginalURL:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
