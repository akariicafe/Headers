@class NSFileManager;

@interface MCFileAccessRepairTool : NSObject

@property (retain, nonatomic) NSFileManager *fileManager;

- (BOOL)fileManagerThinksFileNeedsRepairAtPath:(id)a0;
- (BOOL)fileNeedsRepairAtPath:(id)a0;
- (BOOL)writeData:(id)a0 toFileAtPath:(id)a1;
- (BOOL)posixThinksFileNeedsRepairAtPath:(id)a0;
- (id)contentsOfFileAtPath:(id)a0;
- (id)createFileManager;
- (BOOL)repairFileAtPath:(id)a0 error:(id *)a1;
- (BOOL)changePermissions:(unsigned short)a0 ofFileAtPath:(id)a1;
- (void).cxx_destruct;
- (id)createRepairToolErrorWithCode:(long long)a0;
- (int)accessAtPath:(const char *)a0 mode:(int)a1 error:(int *)a2;

@end
