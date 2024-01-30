@class NSFileManager;

@interface MCFileAccessRepairTool : NSObject

@property (retain, nonatomic) NSFileManager *fileManager;

- (id)createFileManager;
- (id)contentsOfFileAtPath:(id)a0;
- (BOOL)changePermissions:(unsigned short)a0 ofFileAtPath:(id)a1;
- (id)createRepairToolErrorWithCode:(long long)a0;
- (BOOL)fileNeedsRepairAtPath:(id)a0;
- (int)accessAtPath:(const char *)a0 mode:(int)a1 error:(int *)a2;
- (BOOL)writeData:(id)a0 toFileAtPath:(id)a1;
- (BOOL)fileManagerThinksFileNeedsRepairAtPath:(id)a0;
- (BOOL)posixThinksFileNeedsRepairAtPath:(id)a0;
- (void).cxx_destruct;
- (BOOL)repairFileAtPath:(id)a0 error:(id *)a1;

@end
