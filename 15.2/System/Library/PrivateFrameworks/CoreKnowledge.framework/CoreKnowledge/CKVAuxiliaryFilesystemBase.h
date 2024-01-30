@class NSString;

@interface CKVAuxiliaryFilesystemBase : CKVFilesystemBase {
    NSString *_name;
    BOOL _isSaved;
}

+ (id)savedBaseWithName:(id)a0;
+ (id)_savedBaseDirectoryURLWithName:(id)a0;
+ (BOOL)savedBaseExistsWithName:(id)a0;
+ (id)temporaryBaseWithName:(id)a0;

- (id)save;
- (void)remove;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 isSaved:(BOOL)a1;

@end
