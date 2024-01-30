@interface CNCalculatesContactDiff : NSObject

+ (void)addMultiValueUpdateTo:(id)a0 forProperty:(id)a1 contact1:(id)a2 contact2:(id)a3;
+ (id)diffContact:(id)a0 to:(id)a1 error:(id *)a2;
+ (void)addSingleValueUpdateTo:(id)a0 forProperty:(id)a1 contact1:(id)a2 contact2:(id)a3;

@end
