@class NSString, ML3MusicLibraryResourcesManagerContext, _ML3BaseMusicLibraryResourcesManager;

@interface ML3MusicLibraryResourcesManager : NSObject <NSSecureCoding, ML3MusicLibraryResourcesProviding>

@property (class, readonly, nonatomic) ML3MusicLibraryResourcesManager *sharedManager;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _ML3BaseMusicLibraryResourcesManager *implementation;
@property (retain, nonatomic) ML3MusicLibraryResourcesManagerContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pathForBaseLocationPath:(long long)a0;
- (id)libraryContainerPathByAppendingPathComponent:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBaseResourcesManager:(id)a0;
- (id)pathForResourceFileOrFolder:(int)a0 basePath:(id)a1 relativeToBase:(BOOL)a2 createParentFolderIfNecessary:(BOOL)a3;
- (id)initWithContext:(id)a0;
- (id)libraryContainerRelativePath:(id)a0;
- (void).cxx_destruct;
- (id)pathForResourceFileOrFolder:(int)a0;
- (id)initWithCoder:(id)a0;
- (id)libraryContainerPath;

@end
