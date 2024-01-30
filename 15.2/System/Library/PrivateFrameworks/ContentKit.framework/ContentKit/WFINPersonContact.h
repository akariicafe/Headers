@class INPerson;

@interface WFINPersonContact : WFContact

@property (retain, nonatomic) INPerson *person;

+ (BOOL)supportsSecureCoding;
+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)contactWithPerson:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)wfName;
- (id)initWithINPerson:(id)a0;
- (id)wfSerializedRepresentation;
- (id)INPersonRepresentation;

@end
