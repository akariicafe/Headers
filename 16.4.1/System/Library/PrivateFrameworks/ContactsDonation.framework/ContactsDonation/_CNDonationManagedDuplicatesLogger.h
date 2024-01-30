@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNDonationManagedDuplicatesLogger : NSObject <CNDonationManagedDuplicatesLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log_t;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)managedDuplicateServiceCheckingIn;
- (void)managedDuplicateServiceCriteria:(id)a0;
- (void)didSkipRefreshDuplicates:(id)a0;
- (void)willRefreshDuplicates;
- (id)init;
- (void)didRefreshDuplicates;
- (void)didFailRefreshingDuplicates:(id)a0;
- (void).cxx_destruct;

@end
