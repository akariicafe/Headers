@interface EDMessageDataLayoutManager : NSObject

+ (id)attachmentDataDirectoryURLForGlobalMessageID:(long long)a0 basePath:(id)a1 purgeable:(BOOL)a2;
+ (id)messageDataDirectoryURLForGlobalMessageID:(long long)a0 basePath:(id)a1 purgeable:(BOOL)a2;
+ (id)rootMessageDataDirectoryForBasePath:(id)a0 purgeable:(BOOL)a1;

@end
