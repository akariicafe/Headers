@interface UPContextualizerUtilities : NSObject

+ (id)resultFromResult:(id)a0 withNewIntent:(id)a1;
+ (id)buildPayloadResultFromQuery:(id)a0 modelIdentifier:(id)a1 intent:(id)a2 entityName:(id)a3 serializer:(id)a4;
+ (id)createConfirmOrRejectedDialogActsFor:(id)a0 reference:(id)a1;
+ (id)entityLabelsFromCandidate:(id)a0;
+ (id)filterResult:(id)a0 byEntityName:(id)a1 serializer:(id)a2;
+ (id)filterResult:(id)a0 serializer:(id)a1 predicate:(id /* block */)a2;
+ (BOOL)hasTopCandidate:(id)a0 excedingProbability:(double)a1 matchingOneOfIntents:(id)a2;

@end
