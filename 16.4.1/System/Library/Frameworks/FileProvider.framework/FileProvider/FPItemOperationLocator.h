@interface FPItemOperationLocator : FPActionOperationLocator

+ (BOOL)supportsSecureCoding;

- (BOOL)isFolder;
- (id)filename;
- (id)identifier;
- (unsigned long long)size;
- (id)description;
- (id)parentIdentifier;
- (BOOL)isDownloaded;
- (BOOL)isMaterializedOnDisk;
- (BOOL)isProviderItem;
- (BOOL)requiresCrossDeviceCopy;

@end
