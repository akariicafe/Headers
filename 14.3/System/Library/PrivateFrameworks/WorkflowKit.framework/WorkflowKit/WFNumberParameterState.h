@class NSNumber, NSString;

@interface WFNumberParameterState : NSObject <WFParameterState>

@property (readonly, nonatomic) NSNumber *number;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)processingValueClass;

- (id)serializedRepresentation;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNumber:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)containedVariables;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;

@end
