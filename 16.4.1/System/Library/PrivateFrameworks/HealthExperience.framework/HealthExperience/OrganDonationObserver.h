@protocol OrganDonationObserverDelegate;

@interface OrganDonationObserver : NSObject {
    int _organDonationChangedToken;
}

@property (weak, nonatomic) id<OrganDonationObserverDelegate> delegate;

- (void)startObservingChanges;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
