@class NSMutableArray;

@interface ProjectImportExport : NSObject

@property (retain) NSMutableArray *exportedProjectList;

+ (id)sharedInstance;

- (id)init;
- (void)refreshExportedProjectFileList;
- (BOOL)haveExportedProjectNamed:(id)a0;
- (void)undeleteExportedProject:(id)a0;
- (void)deleteExportedProject:(id)a0;
- (void)deleteExportedProjectWithName:(id)a0;

@end
