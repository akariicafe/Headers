@class NSString;

@interface TSCHBaseStyle : TSSStyle <TSCHStyleActAlike>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultPropertyMap;
+ (id)allSpecificsForGeneric:(int)a0;
+ (id)g_genericToSpecificPropertySetMap;
+ (id)g_gilliganPropertyStringFromProperty:(int)a0;
+ (id)g_objectTypeForSpecific:(int)a0;
+ (id)g_specificPropertyToOperationNameBimap;
+ (id)g_specificToGenericPropertyMap;
+ (void)g_splitProperty:(int)a0 outStyleOwner:(id *)a1 outSpecifier:(id *)a2 outKeyName:(id *)a3;
+ (int)g_tangierPropertyFromGilliganPropertyString:(id)a0;
+ (id)paragraphStyleIndexProperties;

- (id)properties;
- (id)shortDescription;
- (id)boxedDefaultValueForProperty:(int)a0;
- (float)defaultFloatValueForProperty:(int)a0;
- (int)defaultIntValueForProperty:(int)a0;
- (id)defaultValueForProperty:(int)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (id)allSpecificsForGeneric:(int)a0;
- (id)customFormatKeys;
- (void)enumerateFormatObjectsUsingBlock:(id /* block */)a0;
- (id)formatObjectPropertySet;
- (id)g_gilliganPropertyStringFromProperty:(int)a0;
- (id)g_objectTypeForSpecific:(int)a0;
- (id)g_specificPropertyToOperationNameBimap;
- (id)g_specificToGenericPropertyMap;
- (void)g_splitProperty:(int)a0 outStyleOwner:(id *)a1 outSpecifier:(id *)a2 outKeyName:(id *)a3;
- (int)g_tangierPropertyFromGilliganPropertyString:(id)a0;
- (void)loadFromPreUFFArchiveWithUnarchiver:(id)a0;
- (void)remapCustomFormatKeysWithOldToNewKeyMap:(id)a0;
- (void)transformFormatObjectsUsingBlock:(id /* block */)a0;
- (void)updateAfterPasteForDocumentRoot:(id)a0 pasteboardCustomFormatList:(id)a1;
- (void)updateForCollaborationForProperties:(id)a0 documentRoot:(id)a1;
- (void)upgradePreU2_0CustomFormatsForDocumentRoot:(id)a0;

@end
