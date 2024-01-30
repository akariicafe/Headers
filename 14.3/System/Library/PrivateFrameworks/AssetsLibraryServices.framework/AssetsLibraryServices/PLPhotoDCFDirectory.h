@class NSMutableDictionary, PLPhotoDCIMDirectory;

@interface PLPhotoDCFDirectory : PLPhotoDCFObject {
    PLPhotoDCIMDirectory *_dcimDirectory;
    NSMutableDictionary *_fileGroupsByNumber;
    int _maxFileGroupNumber;
    int _lastUsedFileGroupNumber;
}

@property BOOL considerInvalidFileGroups;

+ (id)fileGroupRequiredEmptyExtensions;
+ (id)fileGroupRequiredEmptyPrefixes;
+ (void)initializeFileGroupPrefixAndExtensions;

- (id)fullPath;
- (void).cxx_destruct;
- (id)dcimDirectory;
- (id)_lastUsedFileGroupUserInfoKey;
- (id)initWithName:(id)a0 number:(int)a1 dcimDirectory:(id)a2;
- (unsigned int)_calculateBaseDirectoryValue;
- (BOOL)canAddFileGroupWithGroupNumber:(int)a0;
- (BOOL)_canAddItemWithPrefix:(id)a0 minimumFileGroupNumber:(int)a1;
- (BOOL)_canAddItemWithPrefix:(id)a0;
- (BOOL)canAddImage;
- (BOOL)canAddVideo;
- (BOOL)isEntensionValid:(id)a0;
- (id)fileGroups;
- (id)_nextAvailableFileGroupWithPrefix:(id)a0 extension:(id)a1;
- (id)nextAvailableVideoFileGroupWithExtension:(id)a0;
- (void)removeFileGroup:(id)a0;
- (void)setWriteIsPending:(BOOL)a0;
- (void)ensureDirectoryExists;
- (id)nextAvailableFileGroup;

@end
