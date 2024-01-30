@interface FPItemOperationLocator : FPActionOperationLocator

+ (BOOL)supportsSecureCoding;

- (BOOL)isFolder;
- (id)identifier;
- (BOOL)isDownloaded;
- (id)filename;
- (id)parentIdentifier;
- (unsigned long long)size;
- (id)description;
- (BOOL)isProviderItem;
- (BOOL)requiresCrossDeviceCopy;
- (BOOL)isMaterializedOnDisk;

@end
