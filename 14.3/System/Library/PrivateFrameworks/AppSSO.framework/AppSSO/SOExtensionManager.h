@class NSArray, SOExtensionFinder, NSObject;
@protocol OS_dispatch_queue;

@interface SOExtensionManager : NSObject {
    NSObject<OS_dispatch_queue> *_extensionManagerQueue;
    SOExtensionFinder *_extensionFinder;
}

@property (readonly, nonatomic) NSArray *loadedExtensions;

+ (id)sharedInstance;
+ (id)internalExtensionBundleIdentifier;
+ (BOOL)isTiburonExtensionBundleIdentifier:(id)a0;
+ (BOOL)isAppleConnectExtensionBundleIdentifier:(id)a0;
+ (BOOL)isInternalExtensionBundleIdentifier:(id)a0;
+ (id)internalExtensionsBundleIdentifiers;
+ (void)_sendNotificationsLoadedExtensions:(id)a0 new:(id)a1 removed:(id)a2;
+ (BOOL)_isMatchedExtension:(id)a0 forBundleIdentifier:(id)a1;

- (void)_doBeginMatchingExtensions;
- (id)loadedExtensionWithBundleIdentifer:(id)a0;
- (void)loadExtensionWithBundleIdentifer:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)beginMatchingExtensions;
- (void).cxx_destruct;
- (id)_doLoadExtensions;
- (void)dealloc;
- (void)loadExtensions;
- (id)loadExtensionWithBundleIdentifier:(id)a0;
- (id)loadInternalExtension;
- (id)loadedInternalExtension;
- (BOOL)isLoadedExtensionWithBundleIdentifer:(id)a0;
- (void)endMatchingExtensions;
- (void)_doEndMatchingExtensions;
- (void)unloadExtensions;

@end
