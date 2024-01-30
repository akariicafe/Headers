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

- (void).cxx_destruct;
- (void)ensureDirectoryExists;
- (id)nextAvailableFileGroup;
- (BOOL)canAddFileGroupWithGroupNumber:(int)a0;
- (unsigned int)_calculateBaseDirectoryValue;
- (BOOL)_canAddItemWithPrefix:(id)a0;
- (BOOL)_canAddItemWithPrefix:(id)a0 minimumFileGroupNumber:(int)a1;
- (id)_lastUsedFileGroupUserInfoKey;
- (id)_nextAvailableFileGroupWithPrefix:(id)a0 extension:(id)a1;
- (BOOL)canAddImage;
- (BOOL)canAddVideo;
- (id)dcimDirectory;
- (id)fileGroups;
- (id)fullPath;
- (id)initWithName:(id)a0 number:(int)a1 dcimDirectory:(id)a2;
- (BOOL)isEntensionValid:(id)a0;
- (id)nextAvailableVideoFileGroupWithExtension:(id)a0;
- (void)removeFileGroup:(id)a0;
- (void)setWriteIsPending:(BOOL)a0;

@end
