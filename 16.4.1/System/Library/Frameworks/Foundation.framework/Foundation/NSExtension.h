@class NSString, NSBundle, NSDictionary, NSArray;
@protocol PKPlugIn;

@interface NSExtension : NSObject

@property (readonly) BOOL _wantsProcessPerRequest;
@property (retain, nonatomic, setter=_setPlugIn:) id<PKPlugIn> _plugIn;
@property (readonly, retain, nonatomic) NSBundle *_extensionBundle;
@property (readonly, copy, nonatomic) NSString *_localizedName;
@property (readonly, copy, nonatomic) NSString *_localizedShortName;
@property (copy, nonatomic) id /* block */ _requestPostCompletionBlock;
@property (copy, nonatomic) id /* block */ _requestPostCompletionBlockWithItems;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSDictionary *attributes;
@property (readonly, copy, nonatomic) NSDictionary *infoDictionary;
@property (readonly, copy, nonatomic) NSString *extensionPointIdentifier;
@property (readonly, copy, nonatomic) NSArray *icons;
@property (readonly, nonatomic) BOOL optedIn;
@property (copy, nonatomic) id /* block */ requestCompletionBlock;
@property (copy, nonatomic) id /* block */ requestCancellationBlock;
@property (copy, nonatomic) id /* block */ requestInterruptionBlock;

+ (id)extensionWithIdentifier:(id)a0 error:(id *)a1;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)_shouldLogExtensionDiscovery;
+ (void)initializeFiltering;
+ (void)extensionWithURL:(id)a0 completion:(id /* block */)a1;
+ (void)extensionsWithMatchingAttributes:(id)a0 completion:(id /* block */)a1;
+ (id)extensionWithIdentifier:(id)a0 excludingDisabledExtensions:(BOOL)a1 error:(id *)a2;
+ (void)endMatchingExtensions:(id)a0;
+ (id)extensionsWithMatchingAttributes:(id)a0 error:(id *)a1;
+ (BOOL)evaluateActivationRule:(id)a0 withExtensionItemsRepresentation:(id)a1;
+ (BOOL)_evaluateActivationRuleWithoutWorkarounds:(id)a0 withExtensionItemsRepresentation:(id)a1;
+ (id)globalStateQueueForExtension:(id)a0;
+ (void)extensionWithUUID:(id)a0 completion:(id /* block */)a1;
+ (id)predicateForActivationRule:(id)a0;
+ (id)beginMatchingExtensionsWithAttributes:(id)a0 completion:(id /* block */)a1;

- (void)_hostWillEnterForegroundNote:(id)a0;
- (void)_setAllowedErrorClasses:(id)a0;
- (id)_initWithPKPlugin:(id)a0;
- (BOOL)_isPhotoServiceAccessGranted;
- (BOOL)attemptOptOut:(id *)a0;
- (void)_dropAssertion;
- (id)beginExtensionRequestWithOptions:(unsigned long long)a0 inputItems:(id)a1 error:(id *)a2;
- (void)beginExtensionRequestWithInputItems:(id)a0 listenerEndpoint:(id)a1 completion:(id /* block */)a2;
- (void)beginExtensionRequestWithInputItems:(id)a0 completion:(id /* block */)a1;
- (int)pidForRequestIdentifier:(id)a0;
- (void)cancelExtensionRequestWithIdentifier:(id)a0;
- (id)_init;
- (void)_kill:(int)a0;
- (void)_hostDidEnterBackgroundNote:(id)a0;
- (id)objectForInfoDictionaryKey:(id)a0;
- (void)beginExtensionRequestWithOptions:(unsigned long long)a0 inputItems:(id)a1 listenerEndpoint:(id)a2 completion:(id /* block */)a3;
- (void)_hostWillResignActiveNote:(id)a0;
- (void)beginExtensionRequestWithOptions:(unsigned long long)a0 inputItems:(id)a1 completion:(id /* block */)a2;
- (id)init;
- (id)_extensionContextForUUID:(id)a0;
- (void)_hostDidBecomeActiveNote:(id)a0;
- (BOOL)attemptOptIn:(id *)a0;
- (void)_safelyBeginUsing:(id /* block */)a0;
- (id)beginExtensionRequestWithInputItems:(id)a0 error:(id *)a1;
- (void)_safelyEndUsing:(id /* block */)a0;

@end
