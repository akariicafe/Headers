@class NSString, NSDictionary;

@interface JEHashTreatmentAction : JETreatmentAction

@property (retain, nonatomic) NSString *namespace;
@property (retain, nonatomic) NSDictionary *configuration;
@property (retain, nonatomic) NSString *topic;

- (void).cxx_destruct;
- (id)hashOf:(id)a0 userId:(id)a1;
- (id)initWithField:(id)a0 configuration:(id)a1;
- (id)initWithField:(id)a0 configuration:(id)a1 topic:(id)a2;
- (id)performAction:(id)a0 context:(id)a1;

@end
