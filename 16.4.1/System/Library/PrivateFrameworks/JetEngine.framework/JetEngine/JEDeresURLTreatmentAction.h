@class NSString, NSDictionary;

@interface JEDeresURLTreatmentAction : JETreatmentAction {
    NSString *_scope;
    NSDictionary *_allowedParameters;
}

- (void).cxx_destruct;
- (id)allowedQueryItemsFromItems:(id)a0;
- (id)initWithField:(id)a0 configuration:(id)a1;
- (id)performAction:(id)a0 context:(id)a1;

@end
