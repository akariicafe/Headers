@class NSString;

@interface SBSensorActivityAttribution : SBActivityAttribution <SBFSensorActivityAttribution>

@property (readonly, nonatomic) long long sensor;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *attributionGroup;
@property (readonly, copy, nonatomic) NSString *bundleIdentifierMatchingDisplayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
