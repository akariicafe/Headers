@class NSString, TRSession;

@interface TRAnisetteDataProvider : NSObject <AKAnisetteServiceProtocol, NSCopying>

@property (retain, nonatomic) TRSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)legacyAnisetteDataForDSID:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (void)eraseAnisetteWithCompletion:(id /* block */)a0;
- (void)provisionAnisetteWithCompletion:(id /* block */)a0;
- (void)syncAnisetteWithSIMData:(id)a0 completion:(id /* block */)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)a0 withCompletion:(id /* block */)a1;

@end
