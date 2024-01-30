@class NSArray, NSSManager;

@interface MCUIWatchManager : NSObject

@property (retain, nonatomic) NSSManager *nssManager;
@property (nonatomic) unsigned long long fetchStatus;
@property (readonly, nonatomic) long long profileCount;
@property (retain, nonatomic) NSArray *mdmProfiles;
@property (retain, nonatomic) NSArray *configProfiles;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (void)_fetchProfiles;
- (void)_handleFetchProfilesError:(id)a0;
- (void)_watchChanged:(id)a0;
- (void)fetchProfileIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)installProfileData:(id)a0 completion:(id /* block */)a1;
- (void)removeProfileIdentifier:(id)a0 completion:(id /* block */)a1;

@end
