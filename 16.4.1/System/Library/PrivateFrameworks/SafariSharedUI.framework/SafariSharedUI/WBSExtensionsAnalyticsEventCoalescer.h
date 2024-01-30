@class NSString, NSMutableSet, NSTimer;
@protocol WBSExtensionsAnalyticsEventCoalescerDelegate;

@interface WBSExtensionsAnalyticsEventCoalescer : NSObject <WBSExtensionsAnalyticsEventCoalescerDelegate> {
    NSMutableSet *_injectedScriptExtensions;
    NSMutableSet *_buttonInvokedExtensions;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSTimer *_resetTimer;
}

@property (nonatomic) double resetInterval;
@property (weak, nonatomic) id<WBSExtensionsAnalyticsEventCoalescerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)didInvokeToolbarButtonForExtensionWithIdentifier:(id)a0;
- (void)_configureResetTimer;
- (BOOL)didInjectScriptForExtensionWithIdentifier:(id)a0;
- (void)extensionAnalyticsEventCoalescer:(id)a0 didInjectScriptForExtensionWithIdentifier:(id)a1;
- (void)extensionAnalyticsEventCoalescer:(id)a0 didInvokeToolbarButtonForExtensionWithIdentifier:(id)a1;

@end
