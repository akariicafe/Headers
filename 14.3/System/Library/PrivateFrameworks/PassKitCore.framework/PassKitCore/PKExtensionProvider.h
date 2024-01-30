@class NSString, NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface PKExtensionProvider : NSObject

@property (copy, nonatomic) NSString *extensionPoint;
@property (retain, nonatomic) NSDictionary *passKitExtensions;
@property (retain, nonatomic) id matchingContext;
@property (nonatomic) BOOL isBeginningMatching;
@property (retain, nonatomic) NSMutableArray *beginMatchingCompletions;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *extensionMatchTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *extensionQueue;

+ (id)providerForExtensionPoint:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithExtensionPoint:(id)a0;
- (void)_endMatchingExtensions;
- (void)_beginMatchingExtensionsWithCompletion:(id /* block */)a0;
- (void)extensionsWithContainingApplicationIdentifiers:(id)a0 completion:(id /* block */)a1;
- (id)_extensionsForContainingApplicationIdentifiers:(id)a0;
- (void)_invokeAndClearBeginMatchingCompletionsWithError:(id)a0;
- (id)_extensionMatchingEntitlementAttribute;
- (void)_finishedMatchingExtensions:(id)a0 withError:(id)a1;
- (void)extensionWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)extensionsWithContainingAppBundleIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)beginExtensionRequestWithExtension:(id)a0 inputItems:(id)a1 completion:(id /* block */)a2;

@end
