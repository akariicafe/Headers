@class NSSet;

@interface CalStructuredDataArchiver : NSObject

@property (class, readonly, nonatomic) NSSet *defaultPermittedClasses;

+ (id)archiveDictionary:(id)a0 error:(id *)a1;
+ (id)archiveDictionary:(id)a0 permittedClasses:(id)a1 error:(id *)a2;
+ (id)archiveDictionary:(id)a0 permittedClasses:(id)a1 strict:(BOOL)a2 error:(id *)a3;
+ (id)unarchiveDictionaryFromData:(id)a0 error:(id *)a1;
+ (id)unarchiveDictionaryFromData:(id)a0 permittedClasses:(id)a1 error:(id *)a2;
+ (id)unarchiveDictionaryFromData:(id)a0 permittedClasses:(id)a1 strict:(BOOL)a2 error:(id *)a3;

@end
