@class NSUserDefaults;

@interface DCSettings : NSObject

@property (retain) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) BOOL enableViewService;
@property (readonly, nonatomic) BOOL finishAfterFirstScan;

+ (id)sharedSettings;

- (id)init;
- (void).cxx_destruct;
- (id)enableViewServiceBoxed;
- (void)setEnableViewServiceBoxed:(id)a0;
- (id)finishAfterFirstScanBoxed;
- (void)setFinishAfterFirstScanBoxed:(id)a0;

@end
