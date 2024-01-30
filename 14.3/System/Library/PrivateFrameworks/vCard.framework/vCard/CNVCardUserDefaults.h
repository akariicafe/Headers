@interface CNVCardUserDefaults : NSObject

+ (id)objectForKey:(id)a0;
+ (BOOL)includeNotesInVCards;
+ (id)vCard21Encoding;
+ (id)vCardPrivateFields;
+ (unsigned long long)outputFormat;
+ (BOOL)includeUserSettings;
+ (BOOL)boolForKey:(id)a0;
+ (BOOL)isPrivateVCardFieldsEnabled;
+ (long long)integerForKey:(id)a0;
+ (BOOL)debugLogEnabled;
+ (long long)defaultNameOrdering;
+ (BOOL)includePhotosInVCards;

@end
