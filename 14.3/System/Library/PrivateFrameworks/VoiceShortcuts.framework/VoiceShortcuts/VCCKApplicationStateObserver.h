@class FBSDisplayLayoutMonitor;

@interface VCCKApplicationStateObserver : NSObject

@property (readonly, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor;
@property (nonatomic, getter=isApplicationVisible) BOOL applicationVisible;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)a0;

@end
