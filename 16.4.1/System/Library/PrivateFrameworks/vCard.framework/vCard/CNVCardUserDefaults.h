@interface CNVCardUserDefaults : NSObject

+ (long long)integerForKey:(id)a0;
+ (BOOL)boolForKey:(id)a0;
+ (id)objectForKey:(id)a0;
+ (id)vCard21Encoding;
+ (BOOL)includeNotesInVCards;
+ (BOOL)debugLogEnabled;
+ (unsigned long long)outputFormat;
+ (long long)defaultNameOrdering;
+ (BOOL)isPrivateVCardFieldsEnabled;
+ (id)vCardPrivateFields;
+ (BOOL)includePhotosInVCards;
+ (BOOL)includeUserSettings;

@end
