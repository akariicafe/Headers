@class NSArray, NSHashTable, NSObject, NSExtension;
@protocol OS_dispatch_queue;

@interface ILClassificationController : NSObject

@property (class, readonly) ILClassificationController *sharedInstance;

@property (copy, nonatomic) NSArray *extensions;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id matchingExtensionToken;
@property (readonly, nonatomic) NSHashTable *delegates;
@property (copy, nonatomic) id /* block */ firstMatchCompletionBlock;
@property (copy, nonatomic) NSExtension *electedExtension;
@property (readonly, nonatomic, getter=isClassificationAvailable) BOOL classificationAvailable;

+ (BOOL)shouldActivate;
+ (id)electedExtensionFromExtensions:(id)a0;

- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)updateExtensions:(id)a0 electedExtensions:(id)a1;
- (void).cxx_destruct;
- (void)beginMatchingExtensionsWithFirstCompletion:(id /* block */)a0;
- (id)init;
- (void)dealloc;

@end
