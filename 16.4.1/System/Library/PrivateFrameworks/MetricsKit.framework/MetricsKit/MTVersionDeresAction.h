@interface MTVersionDeresAction : MTTreatmentAction

@property (nonatomic) unsigned long long precision;

- (id)performAction:(id)a0 context:(id)a1;
- (id)initWithField:(id)a0 configDictionary:(id)a1;

@end
