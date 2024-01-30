@class PRSService;

@interface PRSExternalSystemService : NSObject {
    PRSService *_service;
}

- (id)service;
- (void).cxx_destruct;
- (void)createLockScreenPhotosPosterWithImageAtURL:(id)a0 selectLockScreenPoster:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchEligibleConfigurationsWithCompletion:(id /* block */)a0;
- (void)updateHomeScreenImageForLockScreenPoster:(id)a0 withImageAtURL:(id)a1 selectLockPoster:(BOOL)a2 completion:(id /* block */)a3;
- (void)updateLockScreenPhotosPoster:(id)a0 withImageAtURL:(id)a1 selectLockScreenPoster:(BOOL)a2 completion:(id /* block */)a3;
- (void)updatePosterMatchingUUID:(id)a0 withConfiguration:(id)a1 completion:(id /* block */)a2;

@end
