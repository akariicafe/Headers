@class NSString, CKVDonationManager, KVDonateVersionLog;

@interface CKVDonateConnectionFactory : NSObject <KVDonateServiceProvider> {
    CKVDonationManager *_donationManager;
    KVDonateVersionLog *_versionLog;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDonationManager:(id)a0;
- (void)terminateConnection:(id)a0;
- (id)makeXPCConnection:(id)a0;
- (id)makeConnection:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)versionLog;

@end
