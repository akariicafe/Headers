@class NSString;

@interface WFWorkflowNoInputBehaviorAskForInput : NSObject <WFWorkflowNoInputBehavior>

@property (class, readonly, nonatomic) BOOL resolvesInput;

@property (readonly, nonatomic) Class contentItemClass;
@property (readonly, nonatomic) BOOL allowMultipleSelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)behaviorName;

- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)a0;
- (void).cxx_destruct;
- (void)resolveWithUserInterface:(id)a0 runningDelegate:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithContentItemClass:(Class)a0 allowMultipleSelection:(BOOL)a1;

@end
