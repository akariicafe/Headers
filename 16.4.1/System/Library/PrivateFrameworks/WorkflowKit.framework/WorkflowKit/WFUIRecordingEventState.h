@class NSString, WFUIRUserEvent;

@interface WFUIRecordingEventState : NSObject <WFParameterState>

@property (readonly, copy, nonatomic) WFUIRUserEvent *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)processingValueClass;

- (id)initWithEvent:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializedRepresentation;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)containedVariables;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;

@end
