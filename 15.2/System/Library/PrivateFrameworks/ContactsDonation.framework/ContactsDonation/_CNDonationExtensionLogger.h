@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNDonationExtensionLogger : NSObject <CNDonationExtensionLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log_t;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)loadedDonorExtension:(id)a0 forIdentifier:(id)a1;
- (void)couldNotLoadDonorExtensionForIdentifier:(id)a0 error:(id)a1;
- (void)willRenewDonation:(id)a0;
- (void)didRenewDonation:(id)a0 untilDate:(id)a1;
- (void)didExpireDonation:(id)a0 withError:(id)a1;
- (void)couldNotRenewDonation:(id)a0 error:(id)a1;
- (void)willRedonateValuesWithReason:(unsigned long long)a0;
- (void)didRedonateValuesWithReason:(unsigned long long)a0;
- (void)couldNotRedonateValuesWithReason:(unsigned long long)a0 error:(id)a1;

@end
