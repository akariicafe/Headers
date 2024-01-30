@class NSObject;
@protocol OS_os_log, ASCAppLaunchTrampolineWorkspace;

@interface ASCAppLaunchTrampoline : NSObject

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) NSObject<ASCAppLaunchTrampolineWorkspace> *workspace;

- (id)handleURL:(id)a0;
- (id)initWithWorkspace:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)handleURL:(id)a0 workspace:(id)a1;
- (id)openApplicationWithBundleIdentifier:(id)a0 payloadURL:(id)a1 workspace:(id)a2;
- (id)openApplicationWithBundleIdentifier:(id)a0 payloadURL:(id)a1;
- (id)productPageURLForAdamId:(id)a0 eventId:(id)a1 encodedMetrics:(id)a2;
- (id)productPageURLForAdamId:(id)a0 eventId:(id)a1;

@end
