@interface AXSimpleRuntimeManager : NSObject

@property (nonatomic) BOOL started;
@property (nonatomic) BOOL systemWideServer;
@property (copy, nonatomic) id /* block */ parameterizedAttributeCallback;
@property (copy, nonatomic) id /* block */ attributeCallback;
@property (copy, nonatomic) id /* block */ setAttributeCallback;
@property (copy, nonatomic) id /* block */ performActionCallback;
@property (copy, nonatomic) id /* block */ clientObserverCallback;
@property (copy, nonatomic) id /* block */ hitTestCallback;
@property (copy, nonatomic) id /* block */ applicationElementCallback;
@property (copy, nonatomic) id /* block */ outgoingValuePreprocessor;

+ (id)sharedManager;

- (void)start;
- (void).cxx_destruct;

@end
