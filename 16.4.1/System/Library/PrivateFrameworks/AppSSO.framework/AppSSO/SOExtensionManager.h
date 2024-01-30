@class NSArray, SOExtensionFinder, NSObject;
@protocol OS_dispatch_queue;

@interface SOExtensionManager : NSObject {
    NSObject<OS_dispatch_queue> *_extensionManagerQueue;
    SOExtensionFinder *_extensionFinder;
}

@property (readonly, nonatomic) NSArray *loadedExtensions;

+ (id)sharedInstance;
+ (BOOL)_isMatchedExtension:(id)a0 forBundleIdentifier:(id)a1;
+ (BOOL)isAppleConnectExtensionBundleIdentifier:(id)a0;
+ (BOOL)isInternalExtensionBundleIdentifier:(id)a0;
+ (void)_sendNotificationsLoadedExtensions:(id)a0 new:(id)a1 removed:(id)a2;
+ (id)internalExtensionsBundleIdentifiers;
+ (id)internalExtensionBundleIdentifier;
+ (BOOL)isTiburonExtensionBundleIdentifier:(id)a0;

- (id)loadedInternalExtension;
- (void)unloadExtensions;
- (id)loadInternalExtension;
- (void)beginMatchingExtensions;
- (void)endMatchingExtensions;
- (void)dealloc;
- (void)loadExtensionWithBundleIdentifer:(id)a0 completion:(id /* block */)a1;
- (id)loadExtensionWithBundleIdentifier:(id)a0;
- (id)loadedExtensionWithBundleIdentifer:(id)a0;
- (void)_doBeginMatchingExtensions;
- (void)_doEndMatchingExtensions;
- (id)init;
- (void)loadExtensions;
- (BOOL)isLoadedExtensionWithBundleIdentifer:(id)a0;
- (void).cxx_destruct;
- (id)_doLoadExtensions;

@end
