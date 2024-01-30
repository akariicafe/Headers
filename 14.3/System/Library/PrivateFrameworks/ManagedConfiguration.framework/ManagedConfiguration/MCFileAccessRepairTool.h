@class NSFileManager;

@interface MCFileAccessRepairTool : NSObject

@property (retain, nonatomic) NSFileManager *fileManager;

- (void).cxx_destruct;
- (BOOL)fileNeedsRepairAtPath:(id)a0;
- (BOOL)repairFileAtPath:(id)a0 error:(id *)a1;
- (BOOL)fileManagerThinksFileNeedsRepairAtPath:(id)a0;
- (BOOL)posixThinksFileNeedsRepairAtPath:(id)a0;
- (id)createFileManager;
- (int)accessAtPath:(const char *)a0 mode:(int)a1 error:(int *)a2;
- (BOOL)changePermissions:(unsigned short)a0 ofFileAtPath:(id)a1;
- (id)contentsOfFileAtPath:(id)a0;
- (id)createRepairToolErrorWithCode:(long long)a0;
- (BOOL)writeData:(id)a0 toFileAtPath:(id)a1;

@end
