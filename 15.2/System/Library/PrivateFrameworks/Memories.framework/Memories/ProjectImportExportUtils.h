@interface ProjectImportExportUtils : NSObject

+ (unsigned int)getTrailingCount:(id)a0 delim:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
+ (id)incrementTrailingCount:(id)a0 delim:(id)a1;
+ (BOOL)doesProjectFileExistForProject:(id)a0;
+ (id)makeUniquePath:(id)a0 delimiter:(id)a1;
+ (BOOL)isValidProjectName:(id)a0;
+ (id)exportPathForProject:(id)a0;
+ (void)reconnectSharedMediaToProject:(id)a0 usingDatemap:(id)a1;

@end
