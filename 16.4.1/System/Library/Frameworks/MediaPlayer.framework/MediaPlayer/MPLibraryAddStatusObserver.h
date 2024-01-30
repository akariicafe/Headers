@class MPModelObject, MPCloudServiceStatusController, MPCloudController, ICUserIdentity;

@interface MPLibraryAddStatusObserver : NSObject {
    BOOL _needsStatusUpdate;
    MPCloudController *_cloudController;
    MPCloudServiceStatusController *_cloudServiceStatusController;
}

@property (readonly, nonatomic) ICUserIdentity *userIdentity;
@property (readonly, nonatomic) long long currentStatus;
@property (copy, nonatomic) id /* block */ statusBlock;
@property (readonly, nonatomic) struct MPLibraryAddStatusObserverConfiguration { BOOL isValidContentType; BOOL isLibraryAdded; BOOL hasCleanContent; BOOL hasExplicitContent; BOOL isLibraryAddEligible; } configuration;
@property (readonly, nonatomic) MPModelObject *identifyingModelObject;

- (void)_allowsExplicitContentDidChangeNotification:(id)a0;
- (void)_transientStateDidChangeNotification:(id)a0;
- (id)initWithUserIdentity:(id)a0;
- (void)_cloudLibraryEnabledDidChangeNotification:(id)a0;
- (void)_updateCurrentStatus;
- (long long)_calculateCurrentStatus;
- (void)dealloc;
- (void)_updateInProgressDidChangeNotification:(id)a0;
- (id)init;
- (void)setConfiguration:(struct MPLibraryAddStatusObserverConfiguration { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })a0 identifyingModelObject:(id)a1;
- (void)_subscriptionStatusDidChangeNotification:(id)a0;
- (void)configureWithModelObject:(id)a0;
- (void).cxx_destruct;

@end
