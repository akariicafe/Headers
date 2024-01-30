@protocol OrganDonationObserverDelegate;

@interface OrganDonationObserver : NSObject {
    int _organDonationChangedToken;
}

@property (weak, nonatomic) id<OrganDonationObserverDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startObservingChanges;

@end
