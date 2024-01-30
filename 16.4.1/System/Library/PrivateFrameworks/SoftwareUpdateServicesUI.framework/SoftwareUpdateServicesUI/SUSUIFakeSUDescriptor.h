@interface SUSUIFakeSUDescriptor : SUDescriptor

- (id)publisher;
- (id)productVersion;
- (BOOL)isDownloadable;
- (int)updateType;
- (id)productBuildVersion;
- (unsigned long long)downloadSize;
- (id)documentation;
- (id)humanReadableUpdateName;
- (unsigned long long)preparationSize;
- (unsigned long long)installationSize;
- (id)productSystemName;
- (BOOL)isDownloadableOverCellular;

@end
