@interface IMDMessageAutomaticHistoryDeletion : NSObject

+ (id)_getDirSubDirURLsForDirPath:(id)a0 error:(id *)a1;
+ (void)deleteDirectoryAtPath:(id)a0;
+ (id)_getFilePathNotDSStore:(id)a0;
+ (BOOL)isDirCreationDateAtPath:(id)a0 olderThanDays:(long long)a1;
+ (BOOL)isFileHeaderDateAtPath:(id)a0 olderThanDays:(long long)a1;
+ (id)_getiChatFileMetadataForPath:(id)a0;
+ (BOOL)isOlderThanDays:(long long)a0 fromDate:(id)a1;
+ (id)_getPathAttributesForPath:(id)a0;
+ (void)cleanUpOrphanAttachments;
+ (void)deleteMessagesAndAttachmentsAfterDays:(long long)a0;
+ (void)cleanDatabase;
+ (void)deleteSpolightArchivedFiles;
+ (BOOL)isFileAtDirPath:(id)a0 olderThanDays:(long long)a1;

@end
