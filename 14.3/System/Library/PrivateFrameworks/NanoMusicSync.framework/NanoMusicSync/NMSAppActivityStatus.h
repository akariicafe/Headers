@class NSString;

@interface NMSAppActivityStatus : NSObject

@property (readonly, nonatomic) NSString *bundleID;

- (id)initWithBundleID:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)_exceedsDormancyIntervalForDate:(id)a0;
- (BOOL)isAppDormant;

@end
