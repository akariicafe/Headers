@class NSString;

@interface MBFileManagerDelegate : NSObject <NSFileManagerDelegate>

@property (copy, nonatomic) id /* block */ shouldCopyItemAtPathToPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)fileManager:(id)a0 shouldCopyItemAtPath:(id)a1 toPath:(id)a2;

@end
