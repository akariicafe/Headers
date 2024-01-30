@class NSString, NSError;

@interface PLFileSystemCapabilities : NSObject {
    unsigned int _interfacesCapabilities;
    unsigned int _nativeCommonAttributes;
    char _fstypename[16];
}

@property (class, readonly) unsigned long long minimumAvailableBytesRequiredForLibraryOpen;

@property (readonly) BOOL isReadOnly;
@property (readonly) BOOL isCloneCapable;
@property (readonly) BOOL isWholeFileLockCapable;
@property (readonly) BOOL isGenCountCapable;
@property (readonly) BOOL isSecludeRenameCapable;
@property (readonly) BOOL isLocalVolume;
@property (readonly) BOOL isInternalVolume;
@property (readonly) BOOL isRootFileSystemVolume;
@property (readonly) NSString *fileSystemTypeName;
@property (readonly) BOOL isNetworkVolume;
@property (readonly) BOOL isCentralizedCacheDeleteCapable;
@property (readonly, getter=isWholeFileLockCapable) BOOL isCoreDataCapable;
@property (readonly, getter=isGenCountCapable) BOOL isCloudPhotoLibraryCapable;
@property (readonly) BOOL isValid;
@property (readonly) NSError *error;

+ (id)capabilitiesWithURL:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (BOOL)determineCapabilitiesWithURL:(id)a0 error:(id *)a1;

@end
