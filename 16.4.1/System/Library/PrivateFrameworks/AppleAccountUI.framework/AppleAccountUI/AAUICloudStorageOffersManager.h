@class PSCloudStorageOffersManager, NSString;

@interface AAUICloudStorageOffersManager : NSObject <PSCloudStorageOffersManagerDelegate>

@property (retain, nonatomic) PSCloudStorageOffersManager *cloudStorageOffersManager;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)manager:(id)a0 didCompleteWithError:(id)a1;
- (void)manager:(id)a0 loadDidFailWithError:(id)a1;
- (void)managerDidCancel:(id)a0;
- (void)presentCloudStorageOffersPageFromNavigationController:(id)a0 requiredStorageThreshold:(id)a1 completionHandler:(id /* block */)a2;

@end
