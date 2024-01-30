@class NSString, SASProximitySession;

@interface SASProximityAnisetteDataProvider : NSObject <NSCopying, AKAnisetteServiceProtocol>

@property (retain) SASProximitySession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)legacyAnisetteDataForDSID:(id)a0 withCompletion:(id /* block */)a1;
- (void)provisionAnisetteWithCompletion:(id /* block */)a0;
- (void)syncAnisetteWithSIMData:(id)a0 completion:(id /* block */)a1;
- (void)eraseAnisetteWithCompletion:(id /* block */)a0;

@end
