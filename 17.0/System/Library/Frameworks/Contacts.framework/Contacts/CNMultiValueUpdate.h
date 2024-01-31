@class NSString;

@interface CNMultiValueUpdate : NSObject <CNMultiValueUpdate_iOSAB>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL ignoreIdentifiers;

+ (id)addValue:(id)a0;
+ (id)removeValue:(id)a0;
+ (id)reorderValues:(id)a0;
+ (id)replaceValue:(id)a0 withValue:(id)a1;

- (BOOL)applyToABPerson:(void *)a0 abmultivalue:(void *)a1 propertyDescription:(id)a2 isUnified:(BOOL)a3 logger:(id)a4 error:(id *)a5;
- (void)applyToMutableMultiValue:(id)a0 withIdentifierMap:(id)a1;
- (long long)multiValueIndexForValue:(id)a0 inMultiValue:(void *)a1 identifier:(id *)a2;

@end
