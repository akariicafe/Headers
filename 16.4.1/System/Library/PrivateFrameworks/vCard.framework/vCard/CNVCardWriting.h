@interface CNVCardWriting : NSObject

+ (id)dataWithPeople:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)stringWithPerson:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)stringWithPeople:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)dataWithPerson:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)excludedFieldsForPerson:(id)a0 options:(id)a1;
+ (id)excludedMeCardFields;
+ (void)makevCardWithBuilder:(id)a0 serializer:(id)a1 options:(id)a2;
+ (id)scopeForPerson:(id)a0 options:(id)a1;
+ (void)serializePerson:(id)a0 withSerializer:(id)a1 options:(id)a2;

@end
