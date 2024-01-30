@class NSString;

@interface NMSAppActivityStatus : NSObject

@property (readonly, nonatomic) NSString *bundleID;

- (id)initWithBundleID:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isAppContentDormant;
- (BOOL)_exceedsDormancyIntervalForDate:(id)a0;
- (BOOL)isAppDownloadingDormant;
- (BOOL)isAppDormant;

@end
