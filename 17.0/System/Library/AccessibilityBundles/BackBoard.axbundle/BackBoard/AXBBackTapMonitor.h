@class AXUIClient, NSString, VOSCommandManager;

@interface AXBBackTapMonitor : NSObject <AXUIClientDelegate>

@property (retain, nonatomic) AXUIClient *backTapClient;
@property (retain, nonatomic) VOSCommandManager *commandManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controller;
+ (void)initializeMonitor;

- (id)init;
- (void)dealloc;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)_policyOption;
- (void)_backTapSettingsDidUpdate;
- (void)_magnifierBackTapSettingsDidSetBackTap;
- (void)_registerForBackTap;
- (void)_registerForBackTapFromMagnifier;
- (BOOL)_shouldEnableBackTap;
- (void)_unregisterForBackTap;

@end
