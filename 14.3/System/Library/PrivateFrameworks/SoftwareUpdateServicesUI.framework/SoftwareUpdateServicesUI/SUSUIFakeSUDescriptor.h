@interface SUSUIFakeSUDescriptor : SUDescriptor

- (id)productVersion;
- (int)updateType;
- (id)publisher;
- (id)documentation;
- (unsigned long long)downloadSize;
- (id)productBuildVersion;
- (BOOL)isDownloadable;
- (id)humanReadableUpdateName;
- (id)productSystemName;
- (unsigned long long)preparationSize;
- (unsigned long long)installationSize;
- (BOOL)isDownloadableOverCellular;

@end
