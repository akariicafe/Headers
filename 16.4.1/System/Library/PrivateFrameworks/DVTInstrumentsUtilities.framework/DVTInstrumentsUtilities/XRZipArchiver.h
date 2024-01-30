@interface XRZipArchiver : NSObject

+ (id)flatUnarchiveFileAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (BOOL)flatArchiveFilesAtURLs:(id)a0 toURL:(id)a1 error:(id *)a2;

@end
