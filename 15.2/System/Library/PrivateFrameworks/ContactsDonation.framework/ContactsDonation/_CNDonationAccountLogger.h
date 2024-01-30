@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNDonationAccountLogger : NSObject <CNDonationAccountLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log_t;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accountAdded:(id)a0;
- (void)accountRemoved:(id)a0;
- (void)donating:(id)a0;
- (void)accountChanged:(id)a0;
- (void)removing:(id)a0;
- (void)donationFailedWithError:(id)a0;
- (void)pluginLoaded;
- (void)accountsDidNotChange;
- (void).cxx_destruct;
- (void)pluginUnloaded;
- (id)init;
- (void)removalFailedWithError:(id)a0;

@end
