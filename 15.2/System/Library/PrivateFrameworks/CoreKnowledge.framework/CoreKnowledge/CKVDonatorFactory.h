@class NSObject;
@protocol OS_dispatch_queue, CKVDonateServiceProvider, CKVDonateAuthorization;

@interface CKVDonatorFactory : NSObject <CKVDonatorProvider> {
    NSObject<OS_dispatch_queue> *_donatorQueue;
    NSObject<CKVDonateServiceProvider> *_serviceProvider;
    NSObject<CKVDonateAuthorization> *_authorization;
}

+ (id)sharedDonatorFactory;

- (void).cxx_destruct;
- (id)init;
- (id)makeDonatorForOriginApp:(id)a0;
- (id)initWithQueue:(id)a0 serviceProvider:(id)a1 authorization:(id)a2;

@end
