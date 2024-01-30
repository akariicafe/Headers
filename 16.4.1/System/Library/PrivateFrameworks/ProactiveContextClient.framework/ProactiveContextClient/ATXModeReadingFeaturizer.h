@interface ATXModeReadingFeaturizer : ATXModeAppLaunchFeaturizer

- (int)modeFeatureType;
- (id)registrationId;
- (unsigned long long)expectedGenreId;
- (id)additionalAllowedBundleIds;

@end
