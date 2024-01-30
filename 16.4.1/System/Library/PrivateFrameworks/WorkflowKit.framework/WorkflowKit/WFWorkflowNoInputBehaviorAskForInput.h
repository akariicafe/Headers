@class NSDictionary, NSString;

@interface WFWorkflowNoInputBehaviorAskForInput : NSObject <WFWorkflowNoInputBehavior>

@property (class, readonly, nonatomic) BOOL resolvesInput;

@property (readonly, nonatomic) Class contentItemClass;
@property (readonly, nonatomic) NSDictionary *serializedParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)behaviorName;

- (id)initWithSerializedRepresentation:(id)a0;
- (id)serializedRepresentation;
- (void).cxx_destruct;
- (id)initWithContentItemClass:(Class)a0 serializedParameters:(id)a1;
- (void)resolveWithUserInterface:(id)a0 runningDelegate:(id)a1 completionHandler:(id /* block */)a2;

@end
