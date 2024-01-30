@class NSArray, SOExtensionFinder, NSObject;
@protocol OS_dispatch_queue;

@interface SOExtensionManager : NSObject {
    NSObject<OS_dispatch_queue> *_extensionManagerQueue;
    SOExtensionFinder *_extensionFinder;
}

@property (readonly, nonatomic) NSArray *loadedExtensions;

+ (id)sharedInstance;
+ (BOOL)isAppleConnectExtensionBundleIdentifier:(id)a0;
+ (id)internalExtensionBundleIdentifier;
+ (void)_sendNotificationsLoadedExtensions:(id)a0 new:(id)a1 removed:(id)a2;
+ (id)internalExtensionsBundleIdentifiers;
+ (BOOL)isInternalExtensionBundleIdentifier:(id)a0;
+ (BOOL)isTiburonExtensionBundleIdentifier:(id)a0;
+ (BOOL)_isMatchedExtension:(id)a0 forBundleIdentifier:(id)a1;

- (BOOL)isLoadedExtensionWithBundleIdentifer:(id)a0;
- (void)endMatchingExtensions;
- (id)loadedInternalExtension;
- (void)_doBeginMatchingExtensions;
- (void)loadExtensionWithBundleIdentifer:(id)a0 completion:(id /* block */)a1;
- (void)loadExtensions;
- (void)unloadExtensions;
- (id)loadInternalExtension;
- (void).cxx_destruct;
- (id)init;
- (id)loadedExtensionWithBundleIdentifer:(id)a0;
- (void)_doEndMatchingExtensions;
- (id)loadExtensionWithBundleIdentifier:(id)a0;
- (void)dealloc;
- (void)beginMatchingExtensions;
- (id)_doLoadExtensions;

@end
