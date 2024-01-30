@class NSSet;

@interface CalStructuredDataArchiver : NSObject

@property (class, readonly, nonatomic) NSSet *defaultWhitelistedClasses;

+ (id)archiveDictionary:(id)a0 error:(id *)a1;
+ (id)archiveDictionary:(id)a0 whitelistedClasses:(id)a1 error:(id *)a2;
+ (id)unarchiveDictionaryFromData:(id)a0 error:(id *)a1;
+ (id)unarchiveDictionaryFromData:(id)a0 whitelistedClasses:(id)a1 error:(id *)a2;

@end
