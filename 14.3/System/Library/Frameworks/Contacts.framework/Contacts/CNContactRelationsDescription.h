@class CNContactRelationsDescriptionLabels, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CNContactRelationsDescription : CNMultiValuePropertyDescription <CNAbstractPropertyDescription>

@property (readonly) NSObject<OS_dispatch_queue> *generationQueue;
@property (retain, nonatomic) CNContactRelationsDescriptionLabels *cachedLabels;
@property (readonly, nonatomic) Class provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)localizedStringForLabel:(id)a0;
- (id)init;
- (id)standardLabels;
- (void).cxx_destruct;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (BOOL)abPropertyID:(int *)a0;
- (id)CNValueForContact:(id)a0;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (BOOL)canUnifyValue:(id)a0 withValue:(id)a1;
- (BOOL)isNonnull;
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)a0;
- (id)managedLabels;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (id /* block */)fromPlistTransform;
- (Class)labeledValueClass;
- (id /* block */)plistTransform;
- (id)initWithLocalizationProvider:(Class)a0;
- (id)_builtInStandardLabels;
- (id)_builtInExtendedLabels;
- (id)labelsForPreferredLanguages:(id)a0;
- (void)_addLocalizedLabels:(id)a0 fromLanguagePlist:(id)a1 languageIdentifier:(id)a2 toDictionary:(id)a3 conflictInfo:(id)a4;
- (id)cachedLabelsForPreferredLanguages:(id)a0;
- (id)standardLabelsWithOptions:(unsigned long long)a0;
- (id)CNLabeledValueValueFromABMultiValueValueBytes:(char *)a0 length:(unsigned long long)a1;
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)a0;

@end
