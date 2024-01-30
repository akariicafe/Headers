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

+ (id)electedExtensionFromExtensions:(id)a0;
+ (BOOL)shouldActivate;

- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)updateExtensions:(id)a0 electedExtensions:(id)a1;
- (void)beginMatchingExtensionsWithFirstCompletion:(id /* block */)a0;

@end
