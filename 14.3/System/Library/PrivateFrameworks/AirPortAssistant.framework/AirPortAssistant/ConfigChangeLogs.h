@interface ConfigChangeLogs : NSObject

+ (id)configChangeLogFilesIncludingAllKeys:(BOOL)a0 orSpecificKeys:(id)a1;
+ (id)configChangeLogFiles;
+ (int)writeConfigChangeLog:(struct _BaseStation { } *)a0;

@end
