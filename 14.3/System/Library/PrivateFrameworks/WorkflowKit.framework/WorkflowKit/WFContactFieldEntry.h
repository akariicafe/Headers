@class WFEmailAddress, WFContact, NSString, WFPhoneNumber;

@interface WFContactFieldEntry : NSObject <WFNaming, WFParameterState>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) WFContact *contact;
@property (readonly, nonatomic) WFPhoneNumber *phoneNumber;
@property (readonly, nonatomic) WFEmailAddress *emailAddress;
@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)processingValueClasses;

- (id)initWithContact:(id)a0;
- (id)serializedRepresentation;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)underlyingObject;
- (id)initWithEmailAddress:(id)a0;
- (id)initWithPhoneNumber:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)containedVariables;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (id)initWithHandleString:(id)a0;

@end
