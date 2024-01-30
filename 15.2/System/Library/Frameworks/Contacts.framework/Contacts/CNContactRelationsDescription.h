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

- (BOOL)isNonnull;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (id /* block */)plistTransform;
- (id /* block */)fromPlistTransform;
- (Class)labeledValueClass;
- (id)initWithLocalizationProvider:(Class)a0;
- (id)_builtInStandardLabels;
- (void)_addLocalizedLabels:(id)a0 fromLanguagePlist:(id)a1 languageIdentifier:(id)a2 toDictionary:(id)a3 conflictInfo:(id)a4;
- (id)_builtInExtendedLabels;
- (id)labelsForPreferredLanguages:(id)a0;
- (id)cachedLabelsForPreferredLanguages:(id)a0;
- (id)standardLabelsWithOptions:(unsigned long long)a0;
- (id)localizedStringForLabel:(id)a0;
- (id)CNLabeledValueValueFromABMultiValueValueBytes:(char *)a0 length:(unsigned long long)a1;
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)a0;
- (id)CNValueForContact:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (id)init;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (id)standardLabels;
- (BOOL)canUnifyValue:(id)a0 withValue:(id)a1;
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)a0;
- (BOOL)abPropertyID:(int *)a0;
- (id)managedLabels;

@end
