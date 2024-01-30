@interface PUCoreImageDebugUtils : NSObject

+ (id)getDebugFiles;
+ (void)setDebugModeEnabled:(BOOL)a0 dumpInputs:(BOOL)a1 dumpOutputs:(BOOL)a2 dumpIntermediates:(BOOL)a3 dumpTiming:(BOOL)a4;
+ (id)debugFilesDirectory;
+ (void)deleteDebugDirectory;
+ (id)listDebugFilesViewController;
+ (id)shareSheetViewController;

@end
