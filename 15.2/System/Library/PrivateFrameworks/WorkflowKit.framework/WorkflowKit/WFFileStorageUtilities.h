@interface WFFileStorageUtilities : NSObject

+ (id)containerIdentifier;
+ (id)documentsDirectoryWithError:(id *)a0;
+ (void)createDocumentsDirectoryIfNecessary;

@end
