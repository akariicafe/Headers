@interface AVAssetDownloadDefaultPrimaryContentConfiguration : AVAssetDownloadContentConfiguration

+ (BOOL)supportsSecureCoding;

- (void)_serializeIntoDownloadConfig:(void *)a0 asset:(id)a1;
- (void)_setupContentConfigWithDownloadConfig:(void *)a0 asset:(id)a1;

@end
