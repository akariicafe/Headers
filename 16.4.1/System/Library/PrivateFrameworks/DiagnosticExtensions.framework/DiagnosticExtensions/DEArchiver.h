@interface DEArchiver : NSObject

+ (id)archiveDirectoryAt:(id)a0;
+ (id)archiveDirectoryAt:(id)a0 deleteOriginal:(BOOL)a1;
+ (id)archiveDirectoryAt:(id)a0 deleteOriginal:(BOOL)a1 progressHandler:(id /* block */)a2;
+ (id)archiveFile:(id)a0;
+ (id)archiveFile:(id)a0 deleteOriginal:(BOOL)a1;
+ (id)archiveFile:(id)a0 deleteOriginal:(BOOL)a1 progressHandler:(id /* block */)a2;
+ (unsigned long long)directorySizeOf:(id)a0;

@end
