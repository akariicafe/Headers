@class WBSParsecSchema;

@interface _WBSParsecArraySchema : WBSParsecSchema

@property (retain, nonatomic) WBSParsecSchema *elementSchema;

- (void).cxx_destruct;
- (BOOL)_validateChild:(id)a0 ofParent:(id)a1 withParentAssociatedError:(id)a2 errorHandler:(id /* block */)a3;
- (id)initWithElementSchema:(id)a0 associatedError:(id)a1 isOptional:(BOOL)a2;

@end
