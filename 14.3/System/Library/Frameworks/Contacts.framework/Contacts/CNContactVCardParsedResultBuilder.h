@class NSString, CNMutableContact;

@interface CNContactVCardParsedResultBuilder : NSObject <CNVCardParsedResultBuilder> {
    CNMutableContact *_contact;
    BOOL _empty;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contactKeyForVCardKey:(id)a0;
+ (id /* block */)contactValueTransformForVCardKey:(id)a0;
+ (id)labeledValuesWithValues:(id)a0 transform:(id /* block */)a1 labels:(id)a2 isPrimaries:(id)a3;

- (id)valueForProperty:(id)a0;
- (id)build;
- (id)init;
- (void).cxx_destruct;
- (long long)personFlags;
- (BOOL)setPersonFlags:(long long)a0;
- (long long)personFlagsByAddingContactType:(long long)a0 toFlags:(long long)a1;
- (long long)contactTypeFromPersonFlags:(long long)a0;
- (BOOL)canSetValueForProperty:(id)a0;
- (BOOL)setValues:(id)a0 labels:(id)a1 isPrimaries:(id)a2 forProperty:(id)a3;
- (id)validCountryCodes;
- (BOOL)setImageData:(id)a0 forReference:(id)a1 clipRects:(id)a2;
- (void)setUnknownProperties:(id)a0;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;

@end
