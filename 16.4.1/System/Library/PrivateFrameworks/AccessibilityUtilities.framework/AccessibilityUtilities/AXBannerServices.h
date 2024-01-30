@class AXUIClient, NSString;

@interface AXBannerServices : NSObject <AXUIClientDelegate>

@property (readonly, nonatomic) AXUIClient *serverClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)_init;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)a0;
- (void).cxx_destruct;
- (void)dismissBanner;
- (void)presentBannerWithTitle:(id)a0 message:(id)a1 duration:(double)a2;

@end
