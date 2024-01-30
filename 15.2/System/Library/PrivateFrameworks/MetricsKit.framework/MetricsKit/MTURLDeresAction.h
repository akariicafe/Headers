@class NSString, NSDictionary;

@interface MTURLDeresAction : MTTreatmentAction

@property (retain, nonatomic) NSString *scope;
@property (retain, nonatomic) NSDictionary *allowedParams;

- (void).cxx_destruct;
- (id)initWithField:(id)a0 configDictionary:(id)a1;
- (id)performAction:(id)a0 context:(id)a1;
- (id)allowedQueryItemsFromItems:(id)a0;

@end
