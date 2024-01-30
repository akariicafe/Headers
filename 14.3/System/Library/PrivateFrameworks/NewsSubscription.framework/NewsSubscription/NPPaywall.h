@class UIViewController;

@interface NPPaywall : NSObject {
    void /* unknown type, empty encoding */ paywallViewControllerWrapper;
    void /* unknown type, empty encoding */ internalDelegate;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ paywallType;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ softPaywallHeightProvider;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ deferredHardPaywallHeightProvider;
@property (nonatomic, readonly) UIViewController *paywallViewController;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)init;
- (void).cxx_destruct;

@end
