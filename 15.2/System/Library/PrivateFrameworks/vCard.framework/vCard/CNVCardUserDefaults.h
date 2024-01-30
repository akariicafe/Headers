@interface CNVCardUserDefaults : NSObject

+ (unsigned long long)outputFormat;
+ (id)vCardPrivateFields;
+ (BOOL)includeUserSettings;
+ (long long)integerForKey:(id)a0;
+ (BOOL)debugLogEnabled;
+ (BOOL)includePhotosInVCards;
+ (id)vCard21Encoding;
+ (BOOL)includeNotesInVCards;
+ (id)objectForKey:(id)a0;
+ (long long)defaultNameOrdering;
+ (BOOL)isPrivateVCardFieldsEnabled;
+ (BOOL)boolForKey:(id)a0;

@end
