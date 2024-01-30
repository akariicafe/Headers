@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNDonationToolLogger : NSObject <CNDonationToolLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log_t;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)commandArgs:(id)a0;

@end
