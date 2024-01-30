@interface ATXModeReadingFeaturizer : ATXModeAppLaunchFeaturizer

- (unsigned long long)expectedGenreId;
- (id)additionalAllowedBundleIds;
- (int)modeFeatureType;
- (id)registrationId;

@end
