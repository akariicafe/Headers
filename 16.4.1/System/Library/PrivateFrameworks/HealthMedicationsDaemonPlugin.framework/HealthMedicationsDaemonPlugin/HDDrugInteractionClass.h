@class NSArray;

@interface HDDrugInteractionClass : HKDrugInteractionClass

@property (readonly, copy, nonatomic) NSArray *relationships;

- (Class)classForKeyedArchiver;
- (id)initWithCoder:(id)a0;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 relationships:(id)a1 ancestorIdentifier:(id)a2 ontologyIdentifier:(id)a3 validRegionCodes:(id)a4;

@end
