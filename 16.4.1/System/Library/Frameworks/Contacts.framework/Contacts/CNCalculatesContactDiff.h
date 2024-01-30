@interface CNCalculatesContactDiff : NSObject

+ (void)addMultiValueUpdateTo:(id)a0 forProperty:(id)a1 contact1:(id)a2 contact2:(id)a3;
+ (void)addSingleValueUpdateTo:(id)a0 forProperty:(id)a1 contact1:(id)a2 contact2:(id)a3;
+ (void)cleanOrphanedCropUpdates:(id)a0 withContact1:(id)a1 contact2:(id)a2;
+ (id)diffContact:(id)a0 to:(id)a1 error:(id *)a2;
+ (BOOL)shouldSaveDuplicateProperty:(id)a0 value1:(id)a1 value2:(id)a2;

@end
