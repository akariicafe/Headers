@interface SUSUIFakeSUDescriptor : SUDescriptor

- (id)productBuildVersion;
- (int)updateType;
- (unsigned long long)downloadSize;
- (id)productVersion;
- (id)publisher;
- (BOOL)isDownloadable;
- (id)documentation;
- (id)humanReadableUpdateName;
- (unsigned long long)installationSize;
- (id)productSystemName;
- (unsigned long long)preparationSize;
- (BOOL)isDownloadableOverCellular;

@end
