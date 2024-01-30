@class CNLabelValuePair, NSString, SGRecordId, NSSet, NSDictionary;
@protocol NSSecureCoding, NSCopying;

@interface CNLabeledValue : NSObject <CNSuggested, NSCopying, NSSecureCoding> {
    BOOL _isValueMutable;
}

@property (class, readonly, nonatomic) id /* block */ Value;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isSuggested) BOOL suggested;
@property (readonly, nonatomic) SGRecordId *suggestionRecordId;
@property (readonly, nonatomic) NSString *suggestionFoundInBundleId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) CNLabelValuePair *labelValuePair;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSSet *linkedIdentifiers;
@property (copy, nonatomic) NSDictionary *storeInfo;
@property (nonatomic) int iOSLegacyIdentifier;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) id<NSCopying, NSSecureCoding> value;

+ (id)localizedStringForLabel:(id)a0;
+ (id)entryWithIdentifier:(id)a0 label:(id)a1 value:(id)a2;
+ (id /* block */)testMatchingIdentifier:(id)a0;
+ (id)entryForIdentifier:(id)a0 inArray:(id)a1;
+ (id)labelForIdentifier:(id)a0 inArray:(id)a1;
+ (id)valueForIdentifier:(id)a0 inArray:(id)a1;
+ (BOOL)isArrayOfEntries:(id)a0 equalToArrayOfEntriesIgnoringIdentifiers:(id)a1;
+ (id)entriesByUnifyingEntryArrays:(id)a0 forProperty:(id)a1;
+ (id)emptyEntries;
+ (id)allValuesInArray:(id)a0;
+ (id)labeledValueWithIdentifier:(id)a0 inArray:(id)a1;
+ (id)firstLabeledValueWithValue:(id)a0 inArray:(id)a1;
+ (id)labeledValueWithLabel:(id)a0 value:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)labeledValueBySettingLabel:(id)a0 value:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLabel:(id)a0 value:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualIgnoringIdentifiers:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 label:(id)a1 value:(id)a2;
- (id)primitiveInitWithIdentifier:(id)a0 label:(id)a1 value:(id)a2;
- (void)addStoreInfo:(id)a0;
- (id)labeledValueBySettingLabel:(id)a0;
- (id)labeledValueBySettingValue:(id)a0;
- (id)valueOrigin;
- (void)encodeWithCoder:(id)a0;

@end
