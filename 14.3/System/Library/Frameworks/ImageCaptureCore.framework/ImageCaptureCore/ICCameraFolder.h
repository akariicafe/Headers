@class NSArray, NSMutableArray;

@interface ICCameraFolder : ICCameraItem {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _filesLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _foldersLock;
}

@property (retain, nonatomic) NSMutableArray *files;
@property (retain, nonatomic) NSMutableArray *folders;
@property (readonly, nonatomic) NSArray *contents;

- (struct CGImage { } *)thumbnail;
- (void)addFile:(id)a0;
- (void)addFolder:(id)a0;
- (void)dealloc;
- (id)valueForUndefinedKey:(id)a0;
- (id)metadata;
- (id)description;
- (BOOL)containsItem:(id)a0;
- (void)deleteFile:(id)a0;
- (void)deleteFolder:(id)a0;
- (BOOL)hasThumbnail;
- (void)deleteItem:(id)a0;
- (id)initWithName:(id)a0 parentFolder:(id)a1 device:(id)a2;
- (void)requestThumbnail;
- (void)requestMetadata;
- (void)lockFiles;
- (void)unlockFiles;
- (void)lockFolders;
- (void)unlockFolders;

@end
