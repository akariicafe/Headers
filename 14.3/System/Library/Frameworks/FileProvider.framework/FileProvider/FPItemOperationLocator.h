@interface FPItemOperationLocator : FPActionOperationLocator

+ (BOOL)supportsSecureCoding;

- (id)filename;
- (BOOL)isProviderItem;
- (id)parentIdentifier;
- (BOOL)isDownloaded;
- (BOOL)requiresCrossDeviceCopy;
- (BOOL)isMaterializedOnDisk;
- (unsigned long long)size;
- (id)description;
- (BOOL)isFolder;
- (id)identifier;

@end
