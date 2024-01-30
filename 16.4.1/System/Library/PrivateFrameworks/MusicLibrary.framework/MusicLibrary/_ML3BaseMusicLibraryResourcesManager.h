@class NSString;

@interface _ML3BaseMusicLibraryResourcesManager : NSObject <ML3MusicLibraryResourcesProviding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *libraryContainerIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)libraryContainerPathByAppendingPathComponent:(id)a0;
- (id)pathForBaseLocationPath:(long long)a0;
- (id)pathForResourceFileOrFolder:(int)a0;
- (id)libraryContainerPath;
- (id)libraryContainerRelativePath:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_mediaResourceRequiresLibraryContainerAccess:(int)a0;
- (id)initWithAccountInfo:(id)a0;
- (id)_libraryContainerPathForDSID:(id)a0;
- (id)_pathForResourceFileOrFolder:(int)a0 basePath:(id)a1 relativeToBase:(BOOL)a2 isFolder:(BOOL *)a3;
- (id)init;
- (id)pathForResourceFileOrFolder:(int)a0 basePath:(id)a1 relativeToBase:(BOOL)a2 createParentFolderIfNecessary:(BOOL)a3;
- (id)initWithLibraryContainerIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)_controlDirectoryPathWithBasePath:(id)a0;

@end
